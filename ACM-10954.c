#include<stdio.h>
int main()
{
    int n,a[100000],cost,sum,i,j;
    scanf("%d",&n);
    while(n!=0 && n>=2 && n<=5000)
    {
        sum=0;cost=0;
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        while(sum==0 && cost==0)
        {
            sum=a[1]+a[2];
            cost=sum;
            for(j=3;j<=n;j++)
            {
                sum=sum+a[j];
                cost=cost+sum;
            }
            printf("%d %d\n",sum,cost);
        }
    }
    return 0;
}
