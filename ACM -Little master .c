#include<stdio.h>
#include<math.h>
int main()
{
    long long int r, t, x, y, i;
    double longest, shortest;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld %lld %lld",&x,&y,&r);
            shortest = (double)r - (double)sqrt((x*x)+(y*y));
            longest = (double)r + (double)sqrt((x*x)+(y*y));
            printf("%.2lf %.2lf\n",shortest,longest);
        }
    }
    return 0;
}
