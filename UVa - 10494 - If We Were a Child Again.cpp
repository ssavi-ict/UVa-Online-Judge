#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[10000];
    long long int n;
    char ch;
    while(scanf("%s %c %lld",s, &ch, &n)==3)
    {
        if(ch=='/')
        {
            long long int rem = 0;
            bool f = true;
            for(int i=0; i<strlen(s); i++)
            {
                rem = rem*10 + (s[i]-'0');
                if(rem/n!=0 && f)
                {
                    printf("%d",rem/n);
                    f = false;
                }
                else if(!f)
                    printf("%d",rem/n);
                rem = rem%n;

            }
            if(f)
                printf("0");
        }
        else
        {
            long long int rem = 0;
            for(int i = 0; i<strlen(s); i++)
            {
                rem = rem*10 + (s[i]-'0');
                rem = rem % n;
            }
            printf("%lld",rem);
        }
        printf("\n");
    }
}
