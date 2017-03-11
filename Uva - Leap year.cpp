#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int loop=0;
    while(cin>>s)
    {
        int leap = 0, hulu=0, bulu=0;
        int len = s.size();
        int m4 = 0, m15=0, m55=0, m100=0, m400=0;
        if(loop>0)
            printf("\n");
        loop++;
        for(int i=0; i<len; i++)
        {
            m4 = (m4*10 + (s[i]-'0'))%4;
            m15 = (m15*10 + (s[i]-'0'))%15;
            m55 = (m55*10 + (s[i]-'0'))%55;
            m100 = (m100*10 + (s[i]-'0'))%100;
            m400 = (m400*10 + (s[i]-'0'))%400;
        }
        if(m4==0)
        {
            if(m100==0)
            {
                if(m400==0)
                    { printf("This is leap year.\n"); leap = 1; }
            }
            else
                { printf("This is leap year.\n"); leap = 1; }
        }
        if(m15==0)
            { printf("This is huluculu festival year.\n"); hulu = 1; }
        if(leap==1 && m55==0)
            { printf("This is bulukulu festival year.\n"); bulu = 1; }
        if(leap==0 && hulu==0 && bulu==0 )
            printf("This is an ordinary year.\n");
    }
    return 0;
}
