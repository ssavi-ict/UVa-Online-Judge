#include<stdio.h>
#include<string.h>
int main()
{
    char a[35];
    int i;
    while(scanf("%s",a)==1)
    {
        for(i=0;i<=strlen(a);i++)
        {
            if(a[i]=='0')
                 printf("0");
            if(a[i]=='1')
                printf("1");
            if(a[i]=='A' || a[i]=='B' || a[i]=='C')
                printf("2");
            if(a[i]=='D' || a[i]=='E' || a[i]=='F')
                printf("3");
            if(a[i]=='G' || a[i]=='H' || a[i]=='I')
                printf("4");
            if(a[i]=='J' || a[i]=='K' || a[i]=='L')
                printf("5");
            if(a[i]=='M' || a[i]=='N' || a[i]=='O')
                printf("6");
            if(a[i]=='P' || a[i]=='Q' || a[i]=='R' || a[i]=='S')
                printf("7");
            if(a[i]=='T' || a[i]=='U' || a[i]=='V')
                printf("8");
            if(a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='Z')
                printf("9");
            if(a[i]=='-')
                printf("-");

        }
        printf("\n");
    }
    return 0;
}
