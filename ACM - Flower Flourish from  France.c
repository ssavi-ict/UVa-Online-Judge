#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100000];
    int i, p, q;
    while(1)
    {
        gets(a);
        if(a[0]=='*')
            break;
        for(i=0;i<strlen(a);i++)
            a[i]=toupper(a[i]);
        p=0; q=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]==' ' && ((a[i+1]>='A' && a[i+1]<='Z') || (a[i+1]>='a' && a[i+1]<='z')))
               {
                   if(a[i+1]==a[0])
                        {p=1;}
                   else
                      q=1;
               }
        }
        if(p==1 && q==0)
            printf("Y\n");
        else if(p==0 && q==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
