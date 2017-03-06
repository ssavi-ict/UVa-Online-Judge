#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int sum=0, k, t;
    scanf("%d",&t);
    while(t-- && t<= 100)
    {
        scanf("%s",a);
        if(a[0]=='d' || a[0]=='D')
        {
            scanf("%d",&k);
            sum=sum+k;
        }
        if(a[0]=='r' || a[0]=='R')
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
