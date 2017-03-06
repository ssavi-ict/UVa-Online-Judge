#include<stdio.h>
int gcd(int a, int b)
{
    int c, l;
    while(a!=0)
    {
        c=b%a;
        b=a;
        a=c;
    }
    return (b);
}
int main()
{
    int n, i, j, g;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            g=0;
            for(i=1;i<n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    g=g+gcd(i,j);
                }
            }
        printf("%d\n",g);
    }
    return 0;
}
