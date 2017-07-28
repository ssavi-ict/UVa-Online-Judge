#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, c, caseno=0;
    while(scanf("%d %d %d",&n,&m,&c)==3 && n && m && c)
    {
        int arr[n+1];
        bool flag[n+1];
        memset(flag,false,sizeof(flag));
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        int state, maxval = 0, tot = 0;
        bool found = false;
        for(int i=0; i<m; i++)
        {
            scanf("%d",&state);
            if(!flag[state-1])
            {
                tot = tot + arr[state-1];
                flag[state-1] = true;
                maxval = max(tot,maxval);
                //cout<<tot<<endl;
                if(maxval>c)
                {
                    found = true;
                }
            }
            else
            {
                tot = tot - arr[state-1];
                flag[state-1] = false;
            }
        }
        printf("Sequence %d\n",++caseno);
        if(found)
           printf("Fuse was blown.\n");
        else
           printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", maxval);
        printf("\n");
    }
    return 0;
}
