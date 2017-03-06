#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(n>1 && n<1001)
            printf("1/2\n");
    }
    return 0;
}
