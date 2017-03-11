#include<bits/stdc++.h>

using namespace std;

bool a[10005];

int main()
{
    int r, n;
    while(scanf("%d %d",&r, &n)==2)
    {
        memset(a,false,sizeof(a));
        int x;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            a[x]=true;
        }
        if(n==r) { printf("*\n"); continue; }
        for(int i=1; i<=r; i++)
        {
            if(!a[i])
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}
