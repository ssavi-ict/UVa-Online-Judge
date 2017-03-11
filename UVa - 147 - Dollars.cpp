#include<bits/stdc++.h>

using namespace std;
int coins[]={5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
long long int dp[12][30010];

long long int func(long long int i, long long int tot)
{
    if(i>=11)
    {
        if(tot==0) return 1;
        else return 0;
    }
    if(dp[i][tot]!=-1)  return dp[i][tot];
    long long int way1=0, way2=0;
    if((tot-coins[i])>=0) way1 = func(i, (tot-coins[i]));
        way2 = func(i+1,tot);
    return dp[i][tot]=way1+way2;
}

int main()
{
    int m, n;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d.%d",&m,&n)==2)
    {

        long long int x = m * 100 + n;
        //cout<<x;
        if(x==0) break;
        printf("%3d.%.2d%17lld\n",m,n,func(0,x));
    }
    return 0;
}

