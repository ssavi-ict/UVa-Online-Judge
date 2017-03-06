#include<stdio.h>
int main()
{
    int n, a,b,c ,sum, m;
    scanf("%d",&n);
    if(n>=2 && n<=20)
    {
        while(n--)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a>=b && a>=c)
            {
                m=a ; sum = b+c;
            }
            if (b>=a && b>=c)
            {
                m=b;  sum = a+c;
            }
            else
            {
                m=c; sum = a+b;
            }
            if(m<sum)
            {
                printf("OK\n");
            }
            else
            {
                printf("Wrong!!\n");
            }
        }
    }
  return 0;
}
