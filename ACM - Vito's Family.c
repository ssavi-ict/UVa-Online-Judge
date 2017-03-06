#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[55555];
int b[55555];
int c[55555];
int main()
{
    int n, t, i, j, l, min, d, k;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        k=0;
        scanf("%d",&n);
        for(i=1; i<=n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]>k)
                    k=a[i];
            }
        for(i=0;i<=k;i++)
            {
                c[i]=0;
            }
        for(j=1;j<=n;j++)
            {
                c[a[j]]=c[a[j]]+1;
            }
        for(i=1;i<=k;i++)
            {
                c[i] = c[i]+c[i-1];
            }
        for(j=n;j>=1;j--)
            {
                b[c[a[j]]]=a[j];
                c[a[j]]=c[a[j]]-1;
            }
        for(i=1;i<=n;i++)
        {
            d=0;
            for(j=1;j<=n;j++)
            {
                d=d+abs(b[i]-b[j]);
            }
            if(i==1)
                min=d;
            if(d<min)
                min=d;
        }
        printf("%d\n",min);
    }
    return 0;
}
