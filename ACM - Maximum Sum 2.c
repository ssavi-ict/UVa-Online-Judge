#include<stdio.h>
int main()
{
    int a[1005], t, i, count, n, space;
    while(scanf("%d",&n)==1 && n>0)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        count=0;space=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>0)
            {
                if(space==1)
                    printf(" ");
                printf("%d",a[i]);
                count=1;
                space=1;
            }
        }
        if(count==0)
            printf("0");
        printf("\n");
    }
    return 0;
}
