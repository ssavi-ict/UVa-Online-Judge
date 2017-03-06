#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, i, p, j, rev,temp,q;
    while(scanf("%lld",&n)==1 && n>1 && n<1000000)
    {
        p=1;rev=0;temp=n;q=1;
        for(i=2; i<=sqrt(n); i++)
        {
            if((n%i)==0)
            {
                p=0;
            }
        }
        if(p==1)
        {
            while(n!=0)
            {
                rev = (rev*10)+(n%10);
                n=n/10;
            }
        }
        for(j=2; j<=sqrt(rev); j++)
        {
            if((rev%j)==0)
            {
                q=0;
            }
        }
        if(q==1 && p==1 &&(temp!=rev))
            printf("%lld is emirp.\n",temp);
        else if(q==0 && p==1)
            printf("%lld is prime.\n",temp);
        else if(q==1 && p==1 && (temp==rev))
            printf("%lld is prime.\n",temp);
        else
            printf("%lld is not prime.\n",temp);

    }
    return 0;
}
