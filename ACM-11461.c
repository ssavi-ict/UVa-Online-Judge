#include<stdio.h>
#include<math.h>
int main()
{
    long long int a , b, i, count;
    freopen("input11461.txt","r",stdin);
    freopen("output11461.txt","w",stdout);
    while(scanf("%lld %lld",&a,&b)== 2 && a>0 && a<=b && b<=100000)
    {
        count =0;
        for(i=1;i<=sqrt(b);i++)
        {
            if((i*i)<=b && (i*i)>=a)
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
