#include<bits/stdc++.h>
#define MAX 65001
#define LL long long int

using namespace std;

int status[(MAX/32)+2];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN= (sqrt(MAX));
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

LL bigmod(LL b, LL p, LL m)
{
    if(p==0)  return 1;
    if(p%2==0)
    {
        LL x = bigmod(b,p/2,m);
        return (x%m * x%m)%m;
    }
    else return ((b%m)*bigmod(b,p-1,m)%m)%m;
}


int main()
{
    sieve();
    LL n;
    while(scanf("%lld",&n) && n)
    {
        if(check(status[n>>5], n&31)==0 ) { printf("%lld is normal.\n",n); continue; }
        bool flag = true;
        for(int i=2; i<n; i++)
        {
            if(i!=bigmod(i,n,n))
            {
                flag = false;
                break;
            }
        }
        if(flag)
           printf("The number %lld is a Carmichael number.\n", n);
        else
            { printf("%lld is normal.\n",n);}
    }
    return 0;
}

/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int clist[]={ 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};
    int n;
    while(scanf("%d",&n) && n)
    {
        for(int i=0; i<15; i++)
        {
            if(clist[i]==n)
               { printf("The number %d is a Carmichael number.\n", n); break; }
            else if(i==14)
                { printf("%d is normal.\n",n); break;}
        }

    }
}*/
