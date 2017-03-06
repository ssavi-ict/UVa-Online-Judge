#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,d;
    while(scanf("%llu",&n)==1)
    {
        if(n==0)
            break;
        d=sqrt(n);
        if(d*d==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
