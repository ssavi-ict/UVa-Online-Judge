#include<bits/stdc++.h>

using namespace std;

int dp[1000001];

void solve()
{
    dp[0] = 1;
    for(int i=1; i<=1000000; i++)
    {
        int a = i - sqrt(i);
        int b = log(i);
        int c = i*(sin(i)*sin(i));
        dp[i] = (dp[a] + dp[b] + dp[c])%1000000;
    }
}

int main()
{
    solve();
    int n;
    while(scanf("%d",&n) && n!=-1)
    {
        printf("%d\n",dp[n]);
    }
    return 0;
}
