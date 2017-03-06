#include<stdio.h>
int main()
{
    int a[1005], n, i, count, j=0, sub, result;
    while(scanf("%d",&n)==1 && n>0)
    {
        count=0; sub=0;
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            if(a[i]>=0 && a[i]<=99)
            {
                if(a[i]==0)
                    count++;
                else
                    sub++;
            }
        }
        result = sub - count;
        printf("Case %d: %d\n",++j,result);
    }
    return 0;
}
