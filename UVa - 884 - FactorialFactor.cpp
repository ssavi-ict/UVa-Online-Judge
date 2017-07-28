#include<bits/stdc++.h>
#define MAX 1000001
#define LL long long int

using namespace std;

int status[(MAX/32)+10];
int factcnt[1000005];
vector<int>primelist;

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
    primelist.push_back(2);
    int cnt = 1;
    for(int i=3; i<=MAX; i=i+2)
    {
        if(check(status[i>>5], i&31)==0)
        {
            primelist.push_back(i);
        }
    }
}

void fact()
{
    sieve();
    factcnt[2]=1;
    for(int i=3; i<1000001; i++)
    {
        int cnt = 0;
        int sqrtN = (int) sqrt(i);
        int div = i;
        if(check(status[i>>5], i&31)==0)
        {
            for(int j=0; primelist[j]<=sqrtN && j<169; j++)
            {
                if(div%primelist[j]==0)
                {
                    while(div%primelist[j]==0)
                    {
                        div = div / primelist[j];
                        cnt++;
                    }
                }
            }
        }
        if(div>1)  cnt++;
        factcnt[i]=factcnt[i-1] + cnt;
    }
}

int main()
{
    fact();
    int n;
    while(scanf("%d",&n)==1)
    {
        cout<<factcnt[n]<<endl;
    }
    return 0;
}
