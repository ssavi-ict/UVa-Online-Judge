#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define S(a) scanf("%d",&a)
#define P(a) printf("%d\n",a)

int main()
{
    int n, p, calc, l;
    while(S(n)==1)
    {
        if(n==0) break;
        l = (int)((log (n))/(log (2.0)));
        p = pow(2,l);
        calc = (n-p);
        if(p==n)
            P(n);
        else
            P(2*calc);
    }
    return 0;
}
