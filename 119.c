#include<stdio.h>
int main()
{
   long long int n,i,a[100],j=0;
   printf("n=");
   scanf("%lld",&n);
   for(i=1; i<=n; i++)
   {
     if((i==1) || ((i%2)==0) || ((i%3)==0)||((i%5)==0))
     {
         j=j+1;
       printf("%lld th = %lld\n",j,i);}
   }
   return 0;
}
