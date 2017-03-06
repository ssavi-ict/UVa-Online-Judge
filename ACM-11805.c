#include<stdio.h>
int main()
{
    int t,n,p,k,r,i=0,result,sum;
    scanf("%d",&t);
    while(t-- && t>=0)
    {

               scanf("%d %d %d",&n,&k,&p);
                i++;
                r=p%n;
                sum=k+r;
                if(sum>n)
                {
                    result=sum-n;
                }
                else
                {
                    result=sum;
                }
                printf("Case %d: %d\n",i,result);

    }
    return 0;
}
