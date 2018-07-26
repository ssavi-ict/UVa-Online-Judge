#include<bits/stdc++.h>
#define MAX 200005
#define i64 long long int

using namespace std;

int status[(MAX/32)+10], sz, relative[MAX];
vector<int>primelist;

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
    status[1>>5]=SET(status[1>>5],1&31);
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
    for(int i=3; i<=MAX; i=i+2)
    {
        if(check(status[i>>5], i&31)==0)
        {
            primelist.push_back(i);
        }
    }
    sz = primelist.size();
}

void PHI()
{
    relative[0] = 0;
    for(int i=1; i<MAX; i++)
    {
        relative[i] = i;
    }
    for(int i=2; i<MAX; )
    {
        if(check(status[i>>5], i&31)==0 && relative[i]==i)
        {
            for(int j=i; j<MAX; j = j + i)
            {
                relative[j] = relative[j] - (relative[j] / i);
            }
        }
        if(i>2) i = i + 2;
        else i++;
    }
}

i64 cumP[200005];

int main()
{
    sieve();
    PHI();
    i64 n;
    i64 cnt = 0;
    cumP[1] = 2;
    for(int i=2; i<=200000; i++){
        cumP[i] = cumP[i-1]+ relative[i];
    }

    while(scanf("%lld", &n) && n)
    {
        if(n==1){
            printf("0/1\n");
        }
        else if(n==2){
            printf("1/1\n");
        }
        else{
            int idx = lower_bound(cumP+1, cumP+200000, n) - (cumP);
            i64 ret = cumP[idx-1];
            for(int i=0; i<=idx; i++){
                if(__gcd(i, idx)==1){
                    ret++;
                    if(ret==n){
                        printf("%d/%d\n", i, idx); break;
                    }
                }
            }

        }

    }
    return 0;
}
