#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s, a[12], b[12], caseno=0;
    while(scanf("%d",&s)==1 && s>-1)
    {
        for(int i=0; i<12; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<12; i++)
            scanf("%d",&b[i]);
        printf("Case %d:\n",++caseno);
        for(int i=0; i<12; i++)
        {

            if(b[i]<=s)
            {
                printf("No problem! :D\n");
                s = s-b[i];
            }
            else
                printf("No problem. :(\n");
            s = s + a[i];
        }
    }
    return 0;
}
