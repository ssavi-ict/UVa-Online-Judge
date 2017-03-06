#include<stdio.h>
int main()
{
    long long int n, i, j, ter[1000], r;
    while(scanf("%lld",&n)==1 && n>=0 && n<1000000001)
    {
        if(n==0)
           {printf("0");}
        j=0;
        while(n>0)
        {
            r = n%3;
            ter[j] = r;
            n = n/3;
            j++;
        }

        for(i=j-1;i>=0;i--)
        {
            printf("%lld",ter[i]);
        }
        printf("\n");
    }
    return 0;
}
