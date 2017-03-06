#include<stdio.h>
int main()
{
    long long int n,result;
    while(scanf("%lld",&n)==1 && n!=0 )
    {
      if(n>=1 && n<=100)
       {
           result = (n*(n+1)*((2*n)+1))/6;
       }
        printf("%lld\n",result);
    }

    return 0;
}
