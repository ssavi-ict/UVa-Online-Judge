#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, x=0, count;
    while(scanf("%lld",&n)==1 && n>0)
    {
        count = ceil((3+sqrt(9+(8*n)))/2);
        printf("Case %lld: %lld\n",++x,count);
    }
    return 0;
}
