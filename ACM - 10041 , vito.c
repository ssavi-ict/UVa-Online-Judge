#include<stdio.h>
int main()
{
    int a[1000], t, r, sum, avg, d, i, j,k,sub;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0; d=0;
        scanf("%d",&r);
        for(j=1;j<=r;j++)
           {
              scanf("%d",&a[j]);
              sum = sum + a[j];
           }
           avg = sum/r;
        for(k=1;k<=r;k++)
        {
            sub=avg-a[k];
            if(sub<0)
            {
                sub = (-1)*sub;
            }
            d = d+sub;
        }
        printf("%d\n",d);
    }
    return 0;
}
