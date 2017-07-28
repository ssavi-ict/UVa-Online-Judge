#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int test;
    scanf("%d",&test);
    getchar();
    for(int caseno=1; caseno<=test; caseno++)
    {
        getline(cin,s);
        size_t sz = s.size();
        char p, q;
        int loop=0, got = 0;
        bool flag = true;
        printf("Case %d: ", caseno);
        for(int i=0; i<sz; i++)
        {
            if(isalpha(s[i]) && flag)
                { p = s[i]; flag = false; loop = 0; got=0; }
            else if(isdigit(s[i]))
            {
                loop = (loop*10) + (s[i]-'0');
                got = loop - got;
                for(int j=0; j<got; j++)
                    printf("%c",p);
                flag = true;
            }
        }
        printf("\n");
    }
    return 0;
}
