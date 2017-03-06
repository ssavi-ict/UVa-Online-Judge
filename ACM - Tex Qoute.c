#include<stdio.h>
#include<string.h>
int main()
{

    char a[100000];
    long long int i, count=0;
    while(gets(a))
    {

        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='"')
            {
                count++;
                if((count%2)==1)
                printf("``");
                else
                printf("''");
            }
            else
                printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
