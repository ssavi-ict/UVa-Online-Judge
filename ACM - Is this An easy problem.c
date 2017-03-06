#include<stdio.h>
int main()
{
long int t,a,b,c,i;
    while(scanf("%ld",&t)==1)
    {
       for(i=1;i<=t;i++)
         {
             scanf("%ld%ld%ld",&a,&b,&c);
             if((a+b)<=c || (b+c)<=a || (c+a)<=b)
             printf("Case %ld: Invalid\n",i);
             else if(a<=0 || b<=0 || c<=0)
             printf("Case %ld: Invalid\n",i);
             else if(a==b && b==c)
             printf("Case %ld: Equilateral\n",i);
             else if(a==b || b==c || c==a)
             printf("Case %ld: Isosceles\n",i);
             else
             printf("Case %ld: Scalene\n",i);
         }

}
return 0;
}

