#include<stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d %d %d",&a,&b,&c)==3 && a>=0 && a<=1 && b>=0 && b<=1 && c>=0 && c<=1)
    {
        if(a==b && c!=a && c!=b)
            printf("C\n");
        if(a==c & b!=a && b!=c)
            printf("B\n");
        if(b==c && a!=b && a!=c)
            printf("A\n");
        if(a==b && b==c)
            printf("*\n");
    }
    return 0;
}
