#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        int car, pos, m;
        int arr[n+2];
        memset(arr,0,sizeof(arr));
        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d", &car, &pos);
            m = i + pos;
            if(m<1 || m>n)
            {
                flag = false;
                continue;
            }
            if(!arr[m]&& flag)
                arr[m] = car;
            else
                {flag = false;}
        }
        if(!flag) puts("-1");
        else
        {
            for(int i=1; i<=n; i++)
            {
                printf("%d",arr[i]);
                if(i<n) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
