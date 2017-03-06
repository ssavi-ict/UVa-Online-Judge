#include<stdio.h>
int main()
{
    int a[1000], n, i, sum , avg, j, count , c=0;
    while(scanf("%d",&n)==1 && n!=0 && n>=1 && n<=50)
    {
        sum =0; count =0;
        for(i=1;i<=n;i++)
            {
                scanf("%d",&a[i]);
                sum = sum + a[i];
            }
            avg = sum / n;
        for(j=1;j<=n;j++)
        {
            while(a[j]>avg)
            {
                count++;
                a[j] = a[j]-1;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++c,count);
    }
    return 0;
}
