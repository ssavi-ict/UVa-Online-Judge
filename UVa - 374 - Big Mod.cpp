#include<bits/stdc++.h>
#define LL long long int

using namespace std;

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
    long long int B, P, M;
    while(scanf("%lld %lld %lld", &B, &P, &M)==3)
        printf("%lld\n", bigmod(B,P,M));
    return 0;
}
