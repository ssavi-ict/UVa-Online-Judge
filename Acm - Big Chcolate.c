#include<stdio.h>
int main()
{
    int m, n, result;
    while(scanf("%d%d",&m,&n)==2 && m>=1 && m<=300 && n>=1 && n<=300)
    {
        result = (m*n)-1;
        printf("%d\n",result);
    }

    return 0;

}
