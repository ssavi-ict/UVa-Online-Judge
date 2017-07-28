#include<bits/stdc++.h>

using namespace std;

int main()
{
    int knights[20002], goose[20002], m, n;
    while(scanf("%d %d", &m, &n)!=EOF)
    {
        if(m==0 || n==0) break;
        for(int i=0; i<m; i++) scanf("%d",&goose[i]);
        for(int i=0; i<n; i++) scanf("%d",&knights[i]);
        int coin  = 0;
        sort(goose,goose+m);
        sort(knights,knights+n);
        if(m>n)
            { printf("Loowater is doomed!\n"); continue; }
        int j = 0;
        int k = 0;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(knights[i]>=goose[j])
            {
                cnt = cnt + knights[i];
                j++;
                k++;
            }
            if(k==m)
            {
                printf("%d\n",cnt);
                break;
            }
        }
        if(k!=m)
        {
            printf("Loowater is doomed!\n");
        }
    }
    return 0;
}
