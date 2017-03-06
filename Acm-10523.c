#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,a,i,result,sum;
    while(scanf("%lld %lld",&n,&a)==2 && n>=1 && n<=150 && a>=0 && a<=15)
    {
        sum =0 ;
        for(i=1;i<=n;i++)
        {
            result=i*pow(a,i);
            sum=sum+result;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
