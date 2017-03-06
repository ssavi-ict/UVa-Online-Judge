#include<stdio.h>
int main()
{
    int n, d, r, n1, n2, result, i, sum, mul;
    while(scanf("%d%d%d",&n,&d,&r)==3 && n!=0 && d!=0 && r!=0)
    {
        if(n>=1 && n<=100 && d>=1 && d<=10000 && r>=1 && r<=5)
        {
            sum=0;mul=0;
            for(i=1;i<=n;i++)
                {
                    scanf("%d %d",&n1, &n2);

                    if((n1+n2)>d)
                      {
                          mul = ((n1+n2)-d)*r;
                      }
                    sum = sum + mul;
                }
        }
        printf("%d\n",sum);
    }
    return 0;
}
