#include<stdio.h>
int main()
{
    int a,b,c,i=1,t,m;
    scanf("%d",&t);
    while((t--) && t>=0 &&  t<20)
          {
              scanf("%d%d%d",&a,&b,&c);
              if((a>=1000 && a<=10000) && (b>=1000 &&b<=10000) && (c>=1000&& c<=10000))
              {
                  if((a>b && a<c)||(a<b && a>c))
                    m=a;
                  else if((b>a && b<c)||(b<a && b>c))
                    m=b;
                  else
                    m=c;
                    printf("Case %d: %d\n",i,m);
                    i++;
                    }
          }
    return 0;
}
