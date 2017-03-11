#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        int n, m;
        scanf("%d",&n);
        int cnt[105];
        memset(cnt,0,sizeof(cnt));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&m);
                cnt[m]++;
            }
        }
        bool ok = true;
        for(int i = 0; i<101; i++)
        {
            if(cnt[i]>n)
            {
                printf("Case %d: no\n", caseno);
                ok = false;
                break;
            }
        }
        if(ok)
            printf("Case %d: yes\n",caseno);
    }
    return 0;
}
