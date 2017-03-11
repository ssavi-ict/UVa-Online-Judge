#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N, R;
    while(scanf("%lld %lld", &N, &R)==2)
    {
        if(N==0 && R==0) break;
        if(R>N/2) R = N - R;
        long long int ans = 1;
        for(int i=1; i<R+1; i++)
        {
            ans = ans * (N-i+1);
            ans = ans / i;
        }
        printf("%llu\n",ans);
    }
    return 0;
}
