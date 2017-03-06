#include<stdio.h>
int main()
{
    int t, n, a[100], mid, j,i;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        if(n>1 && n<11 && (n%2)!=0)
            {
              for(i=1;i<=n;i++)
               {
                   scanf("%d",&a[i]);
                   mid=a[(1+n)/2];
               }
               printf("Case %d: %d\n",j,mid);
            }
    }
    return 0;
}
