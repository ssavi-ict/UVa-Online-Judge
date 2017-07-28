#include<bits/stdc++.h>

using namespace std;

int res[50001][4];

void solve()
{
    for(int i=0; i*i<=50000; i++)
    {
        for(int j=0; j*j<=50000; j++)
        {
            for(int k=0; k*k<=50000; k++)
            {
                int sum = (i*i) + (j*j) + (k*k);
                if(sum>50000) break;
                if(res[sum][3]==1) continue;
                res[sum][0] = i;
                res[sum][1] = j;
                res[sum][2] = k;
                res[sum][3] = 1;
            }
        }
    }
}

int main()
{
    solve();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        if(res[n][3]==0)
            printf("-1\n");
        else
            printf("%d %d %d\n", res[n][0], res[n][1], res[n][2]);
    }
    return 0;
}
