#include<stdio.h>
int a[2000005];
int b[2000005];
int c[2000005];
int main()
{
    int n, i, j, k;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        k=0;
        for(i=1;i<=n;i++)
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
           printf("%d",b[i]);
           if(i<n)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
