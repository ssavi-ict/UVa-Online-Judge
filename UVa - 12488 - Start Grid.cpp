#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int start[n+1], finish[n+1];
        for(int i=1; i<=n; i++)
            scanf("%d",&start[i]);
        for(int i=1; i<=n; i++)
            scanf("%d",&finish[i]);
        int ot = 0, loc, num;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(finish[i]==start[j])
                    {  loc = j; num = finish[i]; break;}
            }
            for(int j=loc; j>i; j--)
            {
                start[j]=start[j-1];
                ot++;
            }
            start[i]=num;
        }
        cout<<ot<<endl;
    }
    return 0;
}
