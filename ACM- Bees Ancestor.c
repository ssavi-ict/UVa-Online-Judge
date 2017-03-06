#include<stdio.h>
int main()
{
    long long int n, first, second, next, i;
    while(scanf("%lld",&n)==1)
    {
        if(n<=0 || n>80)
            break;
        first=0; second=1;
        for(i=1;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%lld\n",next);
    }
    return 0;
}
