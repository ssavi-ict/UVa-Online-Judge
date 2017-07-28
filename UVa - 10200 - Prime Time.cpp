#include<bits/stdc++.h>
#define MAX 1000000
#define LL long long int

using namespace std;

int status[(MAX/32)+10];
int primecnt[10010];
int primelist[MAX];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
    for(int j=4; j<MAX; j=j+2)
        status[j>>5]=SET(status[j>>5],j&31);
    for(int i=3; i<=sqrtN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=MAX; j= j + (i<<1))
            {
                status[j>>5]=SET(status[j>>5],j&31);
            }
        }
    }
    primelist[0]=2;
    int cnt = 1;
    for(int i=3; i<=MAX; i=i+2)
    {
        if(check(status[i>>5], i&31)==0)
        {
            primelist[cnt++]=i;
        }
    }
}
bool isprime(int N)
{

        int id = 0;
        while((primelist[id]*primelist[id])<=N)
        {
            if((N%primelist[id])==0) return false;
            id++;
        }
        return true;

}

int f(int i)
{
    return (i*i) + i + 41;
}
int main()
{
    sieve();
    int cnt = 0;
    for(int i=0; i<=10000; i++)
    {
        int N = f(i);
        if(isprime(N)) { cnt++;}
        primecnt[i]=cnt;
    }
    int a, b;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        int tot = primecnt[b]-primecnt[a-1];
        double parcent = (double)(tot)/(double)(b-a+1);
        printf("%0.2lf\n",(parcent*100.00)+1e-9);
    }
    return 0;
}
