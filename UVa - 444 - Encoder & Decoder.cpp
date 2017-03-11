#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000];
    while(gets(s))
    {
        int len = strlen(s);
        if(isdigit(s[0]))
        {
            int num = 0;
            for(int i=len-1; i>=0; i--)
            {
                num = num*10 + (s[i]-'0');
                if(isprint(num))
                {
                    printf("%c",num);
                    num = 0;
                }
            }
        }
        else
        {
            for(int i=len-1; i>=0; i--)
            {
                int av = s[i];
                if(av<100)
                    printf("%d%d",av%10,av/10);
                else
                    printf("%d%d%d",av%10,(av/10)%10,av/100);
            }
        }
        printf("\n");
    }
    return 0;
}
