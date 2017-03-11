#include<stdio.h>
long long int a[2000005];
int main()
{
    long long int n, i, j, k, add, cost, m, l;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        cost=0; m=n;

        for(k=1;k<n;k++)
        {

            sort(m,a);
            for(i=0;i<=m;i++)
            {
                if(i==0)
                   {
                       a[i]=a[i]+a[i+1];
                       cost=cost+a[i];
                       m--;
                   }
                else
                   {
                       a[i]=a[i+1];
                }
            }
        }
       printf("%lld\n",cost);
    }
    return 0;
}

int sort(long long int m, long long int x[])
   {
       int i, j, t;

       for(i = 1; i <= m-1; i++)
          for(j = 1; j <= m-i; j++)
             if(x[j-1] >= x[j])
             {
                t = x[j-1];
                x[j-1] = x[j];
                x[j] = t;
             }
   }

