#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i=0;
    while(gets(a) && a[0]!='*')
        {
            i++;
            if(a[0]=='H')
            {
                printf("Case %d: Hajj-e-Akbar\n",i);
            }
            else if (a[0]=='U')
            {
                printf("Case %d: Hajj-e-Asghar\n",i);
            }
        }
    return 0;
}
