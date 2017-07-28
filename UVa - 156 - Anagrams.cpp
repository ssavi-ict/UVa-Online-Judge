#include<bits/stdc++.h>
#define pii pair<string,int>

using namespace std;

int main()
{
    string s;
    map<string, int>mymap;
    map<string, int>::iterator its;
    set<string>myset;
    set<string>::iterator it;
    vector<string>myvector;
    while(getline(cin,s) && s[0]!='#')
    {
        stringstream ss(s);
        string x;
        while(ss>>x)
        {
            //mymap.insert(pii(x,0));
            myset.insert(x);
            for(int i=0; i<x.size(); i++)
            {
                if(x[i]>='A' && x[i]<='Z') x[i] = x[i] + 32;
            }
            sort(x.begin(),x.end());
            myvector.push_back(x);
        }
    }
     for(it = myset.begin(); it!=myset.end(); ++it)
     {
        int loop = 0;
        string srt;
        srt = *it;
        for(int i=0; i<srt.size(); i++)
        {
            if(srt[i]>='A' && srt[i]<='Z') srt[i] = srt[i] + 32;
        }
        sort(srt.begin(),srt.end());
        for(int i=0; i<myvector.size(); i++)
        {
            if(srt==myvector[i])
                loop++;
        }
        if(loop==1)
            cout<<*it<<endl;
     }
    return 0;
}
