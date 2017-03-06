#include<stdio.h>
int main()
{
    int n, i=0, r;
    while(scanf("%d",&n)==1)
    {
        if((n%2)!=0 || n==0)
            break;
        else
            r=n/2;
       printf("Case %d: %d\n",++i,r);
    }
    return 0;
}
