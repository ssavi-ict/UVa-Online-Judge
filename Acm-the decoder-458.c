#include<stdio.h>
#include<string.h>
int main()
{
    int l, i;
    char a[10000];
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            printf("%c",a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
