#include<bits/stdc++.h>

using namespace std;

bool isvowel(char c)
{
    if(toupper(c)=='A' || toupper(c)=='E' || toupper(c)=='I' || toupper(c)=='O' || toupper(c)=='U')
        return true;
    else
        return false;
}

int main()
{
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(isalpha(ch))
        {
            if(isvowel(ch))
            {
                while(isalpha(ch))
                {
                    printf("%c",ch);
                    ch = getchar();
                }
                printf("ay");
            }
            else
            {
                char x = ch;
                ch = getchar();
                while(isalpha(ch))
                {
                    printf("%c",ch);
                    ch=getchar();
                }
                printf("%cay",x);
            }
        }
        printf("%c",ch);
    }
    return 0;
}
