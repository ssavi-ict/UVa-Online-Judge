#include<bits/stdc++.h>
#define MAX 1000000
#define LL long long int

using namespace std;

int status[(MAX/32)+10];
vector<long long int>vp;
vector<long long int>::iterator up, down;
int primelist[MAX], cnt;

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
    cnt = 1;
    for(int i=3; i<=MAX; i=i+2)
    {
        if(check(status[i>>5], i&31)==0)
        {
            primelist[cnt++]=i;
        }
    }
}

void almostprime()
{
    sieve();
    for(int i=0; i<cnt; i++)
    {
        LL a = primelist[i];
        while(a<1000000000000)
        {
            a = a * primelist[i];
            vp.push_back(a);
        }
    }
    sort(vp.begin(),vp.end());
}

int main()
{
    almostprime();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int a, b;
        scanf("%lld %lld",&a,&b);
        up = lower_bound(vp.begin(),vp.end(),a);
        down = upper_bound(vp.begin(),vp.end(),b);
        cout<<down-up<<endl;
    }
    return 0;
}
