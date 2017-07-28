#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000];
    string res;
    while(gets(s) && strlen(s)>0)
    {
        int sz = strlen(s);
        long long int num = 0;
        if(s[0]=='|')
        {
            for(int i = 0; i<sz; i++)
            {
                if(s[i]=='o')
                {
                    num = num*10 + 1;
                }
                else if(s[i]==' ')
                {
                    num = num*10 + 0;
                }
            }
            //cout<<num<<endl;
            int dec = 0, rem, base = 1;
            while (num > 0)
            {
                rem = num % 10;
                dec = dec + rem * base;
                base = base * 2;
                num = num / 10;
            }
            //cout<<dec<<endl;
            res = res + char(dec);
        }
    }
    cout<<res;
    return 0;
}
