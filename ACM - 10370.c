#include<stdio.h>
int main()
{
    int c, n, a[1050], i,k ,count, j,l;
    char s='%';
    double average , sum, above_average, r;
    scanf("%d",&c);
    for(l=1;l<=c;l++)
    {
        sum=0;count=0;
        scanf("%d",&n);
       if(n>=1 && n<=1000)
        {
            for(i=1;i<=n;i++)
               {scanf("%d",&a[i]);}
            for(j=1;j<=n;j++)
            {
                    sum=sum+a[j];
            }
            average = sum/n;
            for(k=1;k<=n;k++)
            {
                if(a[k]>average)
                {
                    count++;
                }
            }
            r = count*100;
            above_average = r/n;
            printf("%.3lf%c\n",above_average,s);
        }

    }
    return 0;
}
