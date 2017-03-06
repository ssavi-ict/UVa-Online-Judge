#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    int i;
    while(scanf("%s",a))
    {
        for(i=0;i<strlen(a);i++)
        {
            if((a[i]=='B' || a[i]=='F' || a[i]=='P' ||a[i]=='V'))
            {
                if(a[i-1]!='B' && a[i-1]!='F' && a[i-1]!='P' && a[i-1]!='V')
                {
                    printf("1");
                }
            }
            else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
            {
                    if(a[i-1]!='C'&&a[i-1]!='G'&&a[i-1]!='J'&&a[i-1]!='K'&&a[i-1]!='Q'&&a[i-1]!='S'&&a[i-1]!='X'&&a[i-1]!='Z')
                    {
                        printf("2");
                    }
            }
            else if(a[i]=='D' || a[i]=='T')
            {
                    if(a[i-1]!='D'&& a[i-1]!='T')
                    {
                        printf("3");
                    }
            }
            else if(a[i]=='M' || a[i]=='N')
            {
                if(a[i-1]!='M' && a[i-1]!='N')
                {
                    printf("5");
                }
            }
            else if(a[i]=='L')
            {
                if(a[i-1]!='L')
                {
                    printf("4");
                }
            }
            else if(a[i]=='R')
            {
                if(a[i-1]!='R')
                {
                    printf("6");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
