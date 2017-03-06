#include<stdio.h>
int main()
{
    long long int n,result;
    while(scanf("%lld",&n)==1)
    {
        result=0;
        if(n==0)
            break;
        if(n==1)
            result=0;
        while(n>1 &&n<=100)
        {
            result = result+(n/3);
            n = (n%3)+(n/3);
            if(n==2)
            {
                n++;
            }
        }
        printf("%lld\n",result);
    }
    return 0;
}
