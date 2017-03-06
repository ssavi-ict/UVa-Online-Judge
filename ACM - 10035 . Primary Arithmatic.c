#include<stdio.h>
int main()
{
    unsigned long long int a, b, carry, k, rem1 , rem2, sum;
    while(scanf("%lld%lld",&a,&b)==2 && a!=0 && b!=0)
    {
        carry=0; k=0;

        while(a!=0 || b!=0)
        {
            rem1 = a%10; rem2 = b%10;
            sum = rem1+rem2+k;
            if(sum>9)
            {
                carry++;
                k=1;
            }
            else
            {
                k=0;
            }
            a=a/10; b=b/10;
        }
        if(carry==0)
            printf("No carry operation.\n");
        else if(carry==1)
            printf("%lld carry operation.\n",carry);
        else
            printf("%lld carry operations.\n",carry);
    }
    return 0;
}
