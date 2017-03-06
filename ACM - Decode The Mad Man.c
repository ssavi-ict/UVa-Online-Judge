#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1005];
    int i;
    while(gets(a))
    {
        for(i=0;i<=strlen(a);i++)
        {
            a[i]=tolower(a[i]);
        }
        for(i=0;i<=strlen(a);i++)
        {
            if(a[i]==']')
                a[i]='p';
            else if(a[i]=='[')
                a[i]='o';
            else if(a[i]=='p')
                a[i]='i';
            else if(a[i]=='o')
                a[i]='u';
            else if(a[i]=='i')
                a[i]='y';
            else if(a[i]=='u')
                a[i]='t';
            else if(a[i]=='y')
                a[i]='r';
            else if(a[i]=='t')
                a[i]='e';
            else if(a[i]=='r')
                a[i]='w';
            else if(a[i]=='e')
                a[i]='q';
            else if(a[i]=='\'')
                a[i]='l';
            else if(a[i]==';')
                a[i]='k';
            else if(a[i]=='l')
                a[i]='j';
            else if(a[i]=='k')
                a[i]='h';
            else if(a[i]=='j')
                a[i]='g';
            else if(a[i]=='h')
                a[i]='f';
            else if(a[i]=='g')
                a[i]='d';
            else if(a[i]=='f')
                a[i]='s';
            else if(a[i]=='d')
                a[i]='a';
            else if(a[i]=='.')
                a[i]='m';
            else if(a[i]==',')
                a[i]='n';
            else if(a[i]=='m')
                a[i]='b';
            else if(a[i]=='n')
                a[i]='v';
            else if(a[i]=='b')
                a[i]='c';
            else if(a[i]=='v')
                a[i]='x';
            else if(a[i]=='c')
                a[i]='z';

        }
        printf("%s\n",a);
    }
    return 0;
}
