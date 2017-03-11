#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, tlen, sz, i;
    char s[1000];
    char t[500];
    bool flag;
    cin>>test;
    getchar();
    while(test--)
    {
        getchar();
        gets(s);
        sz = strlen(s);
        for(int loop=1; loop<=sz; loop++)
        {
            for(i=0; i<loop; i++)
            {
                t[i]=s[i];
            }
            t[i]='\0';
            flag = true;
            for(i=0; i<sz && flag; i=i+loop)
            {
                for(int j=0; j<loop && flag ;j++)
                {
                    if(s[i+j]!=t[j])
                        flag = false;
                }
            }
            if(flag)
            {
                tlen = loop;
                break;
            }
        }
        if(flag)
            printf("%d\n",tlen);
        else
            printf("%d\n",sz);
        if(test)
            printf("\n");
    }
    return 0;
}
