#include<bits/stdc++.h>
#define MAX 10000050

using namespace std;

int status[(MAX/32)+2];
vector<int>primelist;

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
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
    int counter=0;
    int j = 0;
    primelist.push_back(2);
    for(int i=3; i<=MAX; i=i+2)
    {
        if(check(status[i>>5], i&31)==0)
        {
            primelist.push_back(i);
        }
    }
}


int main()
{
    sieve();
    long long int n;
    int test=0;
    while(scanf("%lld",&n) && n>0)
    {
        test = 1;
        long long int sqrtn = sqrt(n);
        for(int i=0; primelist[i]<=sqrtn && i<78500; i++)
        {
            if(n%primelist[i]==0)
            {
                while(n%primelist[i]==0)
                {
                    n = n / primelist[i];
                    printf("    %d\n",primelist[i]);
                }
            }
        }
        if(n>1)
           printf("    %lld\n",n);
        printf("\n");
    }
    return 0;
}

