#include<stdio.h>
int main()
{
    long long int n, i, result;
    while(scanf("%lld",&n)==1)
    {
        result =0;
        for(i=1;i<=n;i++)
        {
            result=result+(i*i*i);
        }
        printf("%lld\n",result);
    }
    return 0;
}
