#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<string>v;
    set<string>::iterator it;
    string s;
    string x="";
    while(getline(cin,s))
    {
        int sz = s.size();

        for(int i=0; i<sz; i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        }
        bool found = false;
        for(int i=0; i<=sz; i++)
        {
            if(isalpha(s[i]))
                x = x + s[i];
            else if(s[i]=='-')
            {
                if(isalpha(s[i+1]))
                     x = x + s[i];
                else found = true;
            }
            else if(x!="" && !found)
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

