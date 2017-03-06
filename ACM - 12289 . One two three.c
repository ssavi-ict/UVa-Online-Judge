#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char a[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        if(strlen(a)==5)
        {
            printf("3\n");
        }
        else if ((a[0]=='o' && a[1]=='n') ||
                (a[0]=='o' && a[2]=='e') ||
                (a[0]=='o' && a[1]=='e') ||
                (a[0]=='o' && a[2]=='n') ||
                (a[1]=='n' && a[2]=='e'))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}
