#include<stdio.h>
int main()
{
    long long int a[100000], t, n, i , j , max, c=0;
    scanf("%lld",&t);
    while(t-- && t<=50)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
               scanf("%d",&a[i]);
        max = a[1];
        for(j=1;j<=n;j++)
        {
            if(max<a[j])
            {
                max = a[j];
            }
        }
        printf("Case %lld: %lld\n",++c,max);
    }
 return 0;
}
