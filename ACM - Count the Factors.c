#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, i, j, t, p, count;
    while(scanf("%lld",&n)==1)
    {
        count=0;
        if(n<=0 || n>1000000)
            break;
        for(i=1;i<n;i++)
        {
            p=1;
            if((n%i)==0)
               {
                t=n/i;
                 for(j=2;j<=sqrt(t);j++)
                   {
                    if((t%j)==0)
                      {
                          p=0;
                          break;
                      }
                    }
                 if(p==1)
                    count++;
               }
        }
        printf("%lld : %lld\n",n,count);
    }
    return 0;
}
