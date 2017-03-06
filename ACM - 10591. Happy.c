#include<stdio.h>
int main()
{
    long long int n, sum , rem , t, s, num, i=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&num);
        n=num;
        while(n!=0)
        {
            sum =0;
            while(n!=0)
            {
                rem =n%10;
                sum = sum+rem*rem;
                n=n/10;
            }
            if(sum>9)
                n=sum;
        }
        if(sum==1)
            printf("Case #%lld: %lld is a Happy number.\n",++i,num);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",++i,num);

    }
    return 0;
}
