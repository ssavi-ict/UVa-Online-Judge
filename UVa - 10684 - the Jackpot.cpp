#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    while(scanf("%d",&n) && n)
    {
        int sum = 0;
        int maxe = -11111;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &x);
            sum = sum + x;
            if(sum>maxe) maxe = sum;
            if(sum<0) sum = 0;
        }
        if(sum>0)
            printf("The maximum winning streak is %d.\n", maxe);
        else
            printf("Losing streak.\n");
    }
   return 0;
}
