#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    while(scanf("%lld %lld %lld",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0)
    {
            d = a*a; e = b*b ; f = c*c;
            if(f==d+e)
                printf("right\n");
            else if(d==e+f)
                 printf("right\n");
            else if(e==d+f)
                 printf("right\n");
            else
                 printf("wrong\n");
    }
    return 0;
}
