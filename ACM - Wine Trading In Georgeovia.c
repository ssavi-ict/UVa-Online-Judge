#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int a[200050], t, i, j, s, cost;
    while(scanf("%lld",&t)==1)
    {
        if(t==0)
            break;
        for(i=1;i<=t;i++)
            scanf("%lld",&a[i]);
            cost=0; s=0;
        for(i=1;i<=t;i++)
        {
            s = s+a[i];
            cost=cost+abs(s);
        }
        printf("%lld\n",cost);
    }
    return 0;
}
