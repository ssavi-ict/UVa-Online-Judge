#include<stdio.h>
int main()
{
    int m, q, a[10001], b[10001], i, j , p, temp, s, c=0, k;
    while(scanf("%d %d",&m,&q)==2 )
    {
        if(m==0 && q==0)
            break;
        for(i=1;i<=m;i++)
            scanf("%d",&a[i]);
        for(j=1;j<=q;j++)
            scanf("%d",&b[j]);
        for(i=1; i<=m; i++)
           {
                for(p=1;p<=(m-i);p++)
                {
                    if(a[p]>a[p+1])
                    {
                        temp=a[p+1];
                        a[p+1]=a[p];
                        a[p]=temp;
                    }
                }
            }
        printf("CASE# %d:\n",++c);
        for(j=1;j<=q;j++)
        {
            k=0;
            for(i=1; i<=m; i++)
            {
                if(a[i]==b[j] && k!=1)
                {
                    printf("%d found at %d\n",b[j],i);
                    k=1;
                }
            }
            if(k==0)
                {
                    printf("%d not found\n",b[j]);
                }
        }
    }
    return 0;
}
