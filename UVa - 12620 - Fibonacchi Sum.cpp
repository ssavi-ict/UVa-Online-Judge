#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int fibsum[302];

void fib()
{
    fibsum[1]=1; fibsum[2]=2;
    int f = 1, s = 1;
    for(int i=3; i<301; i++)
    {
        int got = (f+s)%100;
        f = s;
        s = got;
        fibsum[i] = fibsum[i-1] + got;
    }
}

LL calc(LL x)
{
    if(x<301) return fibsum[x];

    LL n = x/300;

    LL sum = fibsum[300] * n;

    sum = sum + fibsum[x%300];

    return sum;
}

int main()
{
    fib();
    LL a, b;
    int test;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%lld %lld", &a, &b);
        LL ans = calc(b) - calc(a-1);
        printf("%lld\n",ans);
    }
    return 0;
}
