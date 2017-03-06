#include<stdio.h>
int main()
{
    int m,n,i,j,result,count,t;
    while(scanf("%d%d",&m,&n)==2)
    {
        printf("%d %d",m,n);
        result=0;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        for(i=m;i<=n;i++)
        {
            j=i;count=1;
            while(j>1)
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
            }
            if(count>result)
            {
                result=count;
            }

        }
        printf(" %d\n",result);
    }
return 0;
}
