#include<stdio.h>
int main()
{
    long long int n, sum, i,f,s;
    while(scanf("%lld",&n)==1)
    {
        if(n<=0 || n>50)
        break;
        f=0; s=1;
        for(i=1;i<=n;i++)
        {
            sum = f+s;
            f=s;
            s=sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
