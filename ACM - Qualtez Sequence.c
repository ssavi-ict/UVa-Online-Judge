#include<stdio.h>
int main()
{
    long long int m,n,i,j,result,count,t=0,a,b;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        a=m; b=n;
        if(m<0 && n<0)
            break;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
            j=m;count=1;
            while(j>1 && j<=n)
            {
                if((j%2)==0)
                {
                    j=j/2;
                }
                else
                {
                    j=(3*j)+1;
                }
                count++;
                if(j>n)
                    count--;
            }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++t,a,b,count);
    }
return 0;
}
