#include<stdio.h>
int main()
{
    long long int n, x, y, z, f,sum, i;
    scanf("%lld",&n);
    while(n-- && n<20)
    {
        sum=0;
        scanf("%lld",&f);
        if(f>0 && f<20)
        {
            for(i=1; i<=f; i++)
            {
                scanf("%lld %lld %lld",&x,&y,&z);
                sum = sum+ (x*z);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
