#include<stdio.h>
int main()
{
    int a[1000], i, j, k, n, m, count,d;
    while(scanf("%d%d",&n,&m)==2)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                scanf("%d",&a[j]);
            d=0;
            for(k=1;k<=m;k++)
            {
                if(a[k]==0)
                    {d=1;}
            }
            if(d==0)
                count++;
        }
        printf("%d\n",count);
    }return 0;
}
