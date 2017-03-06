#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    //freopen("rel.txt","r",stdin);
    //freopen("ansrel.txt","w",stdout);
    while((t--)&&t<15)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
