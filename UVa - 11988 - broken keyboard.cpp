#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100001];
    while(scanf("%s",s)!=EOF)
    {
        string first="", second = "";
        int sz = strlen(s);
        bool start = false, stop = true;
        for(int i =0; i<sz; i++)
        {
            if(s[i]==']') { stop = true ; start = false; continue;}
            if(s[i]=='[') { start = true; stop = false; continue;}
            if(start && !stop)
                first = first + s[i];
            else
                second = second + s[i];
        }
        cout<<first<<second<<endl;
    }
    return 0;
}
