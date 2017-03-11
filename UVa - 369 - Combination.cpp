#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N, R;
    while(scanf("%lld %lld", &N, &R)==2)
    {
        if(N==0 && R==0) break;
        long long int x = R;
        if(R>N/2) R = N - R;
        long long int ans = 1;
        for(int i=1; i<R+1; i++)
        {
            ans = ans * (N-i+1);
            ans = ans / i;
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n",N, x, ans);
    }
    return 0;
}

