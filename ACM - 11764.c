#include<stdio.h>
int main()
{
    int a[100] , i , high, low , j , n , t , k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        high =0 ; low =0;
        scanf("%d",&n);
        if(n>0 && n<50)
        {
            for(i=1;i<=n;i++)
               {
                   scanf("%d",&a[i]);
               }
            for(j=1;j<n;j++)
            {
                if(a[j]>a[j+1])
                {
                    low++;
                }
                else if(a[j]<a[j+1])
                {
                    high++;
                }
            }

        }
        printf("Case %d: %d %d\n", k , high , low);
    }
   return 0;
}
