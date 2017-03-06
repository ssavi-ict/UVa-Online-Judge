#include<stdio.h>
int main()
{
    long long int n, temp, t, rem, count, add, rev, j;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&n);
        add=0;count=0;
        while(n!=add)
            {
                temp=n;rev=0;
                while(temp!=0)
                {
                   rem=temp%10;
                   rev = (rev*10)+rem;
                   temp=temp/10;
                }
                if(n!=rev)
                {
                    n=n+rev;
                    add=rev;
                    count++;
                }
                else
                    {break;}
            }

        printf("%lld %lld\n",count,rev);
    }
    return 0;
}
