#include<stdio.h>
int main()

{
    int t, e,f,c,sum,result,i;
    //freopen("input11689.txt","r",stdin);
    //freopen("output11689.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        if(e>=0 && e<1000 && f>=0 && f<1000 && c>1 && c<2000)
       {
            result=0;
            sum=e+f;
            while(sum>=c)
            {

                result=result+(sum/c);
                sum=(sum/c) + (sum%c);
            }
       }
        printf("%d\n",result);
    }
    return 0;
}
