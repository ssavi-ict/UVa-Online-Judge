#include<stdio.h>
int main()
{
long long int hs, op, dif,a,b;

   while(scanf("%lld %lld",&a,&b)!=EOF)
  {
    if(a>b)
    {
    op=a;
    hs=b;
    }
 else
   {
     op=b;
     hs=a;
   }
  dif=op-hs;
  printf("%lld\n",dif);
   }
 return 0;
}
