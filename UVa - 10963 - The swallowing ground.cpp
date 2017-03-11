#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, diff, x, y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        bool flag = false;
        for(int i=0; i<m; i++)
        {
            cin>>x>>y;
            if(i==0)
                diff = abs(x-y);
            else
            {
                if(abs(x-y)!=diff)
                    { flag = true;  break; }
            }
        }
        if(flag)
            printf("no\n");
        else
            printf("yes\n");

        if(t)
            printf("\n");
    }
    return 0;
}
