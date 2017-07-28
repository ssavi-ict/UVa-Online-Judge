#include<bits/stdc++.h>

using namespace std;
long long int dp[1005][1005];

int main()
{
    int m, n;
    int arr[1005];
    while(scanf("%d %d", &n, &m) && m && n )
    {
        for(int i=1; i<=n; i++)
            scanf("%d", &arr[i]);
        dp[0][0] = 1;
        for(int i=0; i<=n; i++)
            dp[i][0] = 1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                dp[i][j] = ((dp[i-1][j-1]*arr[i])%m + (dp[i-1][j])%m)%m;
                //cout<<dp[i][j]<<endl;
            }
            //cout<<"==="<<endl;
        }
        long long int res=0;
        for(int i = 1; i<=n; i++)
            res = max(res,dp[n][i]);
        printf("%lld\n",res);
    }
    return 0;
}

/* If C[m][k] denotes the sum of products of elements of all subsets of size k chosen from first m elements,
then we have: C[m][k] = C[m-1][k] + C[m-1][k-1] * A[m], (where A[m] is m-th number in input.)*/
