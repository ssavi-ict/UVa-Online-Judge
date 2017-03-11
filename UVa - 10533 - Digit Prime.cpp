#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int status[(MAX/32)+2];
int sum[MAX+1];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
    for(int k=4; k<=MAX; k=k+2)
        SET(status[k>>5],k&31);
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
}

int digsum(int x)
{
    int tot = 0;
    while(x!=0)
    {
        tot = tot + x%10;
        x = x/10;
    }
    return tot;
}

int main()
{
    sieve();
    int cnt=1;
    sum[2]=1;
    for(int i=3; i<=MAX; i=i+2)
    {
        int s = digsum(i);
        if((s==2 || s%2!=0) && (check(status[i>>5], i&31)==0) && (check(status[s>>5], s&31)==0))
           cnt++;
        sum[i]=sum[i+1]=cnt;
    }
    int test, t1, t2;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%d %d", &t1, &t2);
        printf("%d\n", sum[t2]-sum[t1-1]);
    }
    return 0;
}

