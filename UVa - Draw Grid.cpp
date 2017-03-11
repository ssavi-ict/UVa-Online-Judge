#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s, t, n, caseno=0;
    while(scanf("%d %d %d", &s, &t, &n)==3)
    {
        if(s==0 && t==0 && n==0)  break;
        int loop = (n*s) + (t*(n+1));
        printf("Case %d:\n",++caseno);
        for( int i=0; i<n; i++)
        {
            for(int l=0;l<t; l++)
            {
                for(int j=0; j<loop; j++)  printf("*");
                printf("\n");
            }
           for(int ii = 0; ii<s; ii++)
            {
                for(int l=0; l<n; l++)
                   {
                       for(int f=0; f<t; f++)  printf("*");
                       for(int j=0; j<s; j++)  printf(".");
                   }
                for(int f=0; f<t; f++)  printf("*");
                printf("\n");
            }
        }
        for(int i=0;i<t; i++)
        {
            for(int j=0; j<loop; j++) printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
