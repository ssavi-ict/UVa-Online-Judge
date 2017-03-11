#include<bits/stdc++.h>

using namespace std;
int coins[]={1,5,10,25,50};
long long int dp[5][30010];

long long int func(long long int i, long long int tot)
{
    if(i>=5)
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
    int n;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&n)==1)
    {
        long long int totways = func(0,n);
        if(totways==1)
            printf("There is only 1 way to produce %d cents change.\n",n);
        else
            printf("There are %lld ways to produce %d cents change.\n",totways, n);
    }
    return 0;
}
