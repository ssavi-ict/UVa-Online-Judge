#include<stdio.h>
int main()
{
    long long int t, n , result, rest , end;
    scanf("%lld",&t);
    if(t>=0 && t<= 100)
    {
        while(t--)
        {
            scanf("%lld",&n);
            if ( n>= -1000 && n<= 1000 )
            {
            result = ((((((n*567)/9)+7492)*235)/47)-498);
            rest=result/10;
            end = rest % 10;
            if(end<0)
            {
                end = (-1) * end;
            }
            printf("%lld\n",end);
            }
        }
   }
    return 0;
}
