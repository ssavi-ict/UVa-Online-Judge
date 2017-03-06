#include<stdio.h>
int main()
{
    long long int sum,n;
    int i;
    //freopen("p.txt","r",stdin);
    //freopen("ansp.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
            break;
        sum=1;
        if(n>=0)
        {
          for(i=1;i<=n; i++)
          {
            sum=sum+i;
          }
    }
       printf("%lld\n",sum);

    }

    return 0;
}
