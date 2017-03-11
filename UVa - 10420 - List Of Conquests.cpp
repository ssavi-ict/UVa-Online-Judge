#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int>mymap;
    set<string>myset;
    set<string>::iterator it;
    int test;
    string s;
    string s1 = "";
    scanf("%d",&test);
    getchar();
    for(int j=0; j<test; j++)
    {
        getline(cin,s);
        bool flag = true;
        for(int i=0;; i++)
        {
            if(s[i]==' ' && flag) continue;
            flag = false;
            if(s[i]==' ') { break; }
            else s1 = s1 + s[i];
        }
        myset.insert(s1);
        mymap[s1]++;
        s1="";
    }
    for(it = myset.begin(); it!=myset.end(); ++it)
        cout<<*it<<' '<<mymap[*it]<<endl;
    return 0;
}
