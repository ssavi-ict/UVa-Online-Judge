#include<bits/stdc++.h>
#define ULL unsigned long long int

using namespace std;

ULL fiblist[5000], M;

ULL bigmod(ULL b, ULL p, ULL m)
{
    if(p==0)  return 1;
    if(p%2==0)
    {
        ULL x = bigmod(b,p/2,m);
        return (x%m * x%m)%m;
    }
    else return ((b%m)*bigmod(b,p-1,m)%m)%m;
}
void solve(int n, int M)
{
    fiblist[1] = 1; fiblist[2] = 1;
    for(int i=3; i<=n; i++)
        fiblist[i] = (fiblist[i-1] + fiblist[i-2])%M;
}

int main()
{
    ULL B, P;
    while(scanf("%llu %llu %llu", &B, &P, &M)==3)
        { solve(1000,M); printf("%llu\n", fiblist[bigmod(B,P,M)]); }
    return 0;
}

