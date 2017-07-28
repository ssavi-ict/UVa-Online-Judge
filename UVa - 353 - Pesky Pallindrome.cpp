#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        string t;
        set<string>myset;
        set<string>::iterator it;
        int sz = s.size();
        for(int i=0; i<sz; i++)
        {
            t = s[i];
            myset.insert(t);
            for(int j=i+1; j<sz; j++)
            {
                t = t + s[j];
                myset.insert(t);
            }
        }
        string an;
        int cnt = 0;
        for(it=myset.begin(); it!=myset.end(); ++it)
        {
            an = *it;
            reverse(an.begin(),an.end());
            if(*it==an)
                cnt++;
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;
    }
    return 0;
}
