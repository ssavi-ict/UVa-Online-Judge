#include<bits/stdc++.h>
#define MAX 10000005

using namespace std;

int status[(MAX/32)+2];

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
    //puts("2");
    int j = 0;
    for(int i=2; i<=MAX; )
    {
        if(check(status[i>>5], i&31)==0)
        {
            printf("%d\n",i);
            j++;
        }
        if(i==2) i++;
        else i=i+2;
    }
    cout<<j;
}


int main()
{
    sieve();
    return 0;
}
