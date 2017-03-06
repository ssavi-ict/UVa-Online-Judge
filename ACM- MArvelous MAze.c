#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i, sum, j;
    while(gets(a))
    {
        sum=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                sum=sum+(a[i]-'0');
            }
            else if((a[i]>='A' && a[i]<='Z') || a[i]=='*')
            {
                    for(j=1;j<=sum;j++)
                        printf("%c",a[i]);
                sum=0;
            }
            else if(a[i]=='b')
                {
                    for(j=1;j<=sum;j++)
                        printf(" ");
                    sum=0;
                }
            else if(a[i]=='!')
                {
                    printf("\n");
                    sum=0;
                }
        }
        printf("\n");
    }
    return 0;
}
