#include<stdio.h>
int main()
{
    long long int m,n,t,i;
    scanf("%lld",&t);
    for(i=1; i<=t;i++)
    {
        scanf("%lld %lld",&m,&n);
            if((n%m)==0)
                printf("%lld %lld\n", m, n);
            else
                printf("-1\n");
    }
    return 0;
}
