#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int n, i, rem, bin[1000], count,j;
    while(scanf("%lld",&n)==1 && n!=0 && n>=1 && n<=2147483647)
    {
        count=0;i=1;
        while(n!=0)
        {
            bin[i]=n%2;
            if((n%2)==1)
            {
                count++;
            }
            n=n/2;
            i++;
        }
        printf("The parity of ");
        for(j=i-1;j>0;j--)
        {
            printf("%lld",bin[j]);
        }
        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}
