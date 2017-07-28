#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<string>v;
    set<string>::iterator it;
    string s;
    while(getline(cin,s))
    {
        int sz = s.size();
        string x="";
        for(int i=0; i<sz; i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        }
        for(int i=0; i<=sz; i++)
        {
            if(isalpha(s[i]))
                x = x + s[i];
            else if(x!="")
            {
                v.insert(x);
                x="";
            }
        }
    }
    for(it = v.begin(); it!=v.end(); ++it)
        cout<<*it<<endl;
    return 0;
}
