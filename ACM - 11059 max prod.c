#include<stdio.h>
int main()
{
    int a[100] ,n, mul=1, i,j, count=0;

    while(scanf("%d",&n)==1 && n>=1 && n<=18)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);

         for(j=1;j<=n;j++)
         {
             if(a[j]>0 && a[j]<=10)
             {
                 mul=mul*a[j];
             }
             else if (a[j]<=-10 && a[j]<0)
             {
                 mul=0;
             }
         }

         printf("Case #%d: The maximum product is %d.\n",++count, mul);
    }
    return 0;
}
