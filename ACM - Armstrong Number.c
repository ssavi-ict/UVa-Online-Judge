#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int r, sum, order, temp, t, s, i, mul;
    char n[15];
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%s",n);
        order=strlen(n);
        temp = atol(n);
        s=temp;
        while(s!=0)
        {
            r = s%10; mul=1;
            for(i=1;i<=order;i++)
              mul = mul*r;
            sum = sum+mul;
            s = s/10;
        }
        if(sum==temp)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }
    return 0;
}
