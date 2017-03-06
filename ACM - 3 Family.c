#include<stdio.h>
#include<math.h>
int main()
{
    int t,result,a, b, c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        result= c*((2*a)-b)/(a+b);
        if(result<=0)
            printf("0\n");
        else
           printf("%d\n", result);
    }
    return 0;
}
