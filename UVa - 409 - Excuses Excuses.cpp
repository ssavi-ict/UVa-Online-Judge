#include<bits/stdc++.h>

using namespace std;

int main()
{
    int key, exc, caseno=0;
    while(scanf("%d %d", &key, &exc)==2)
    {
        set<string>myset;
        set<string>::iterator it;
        string st;
        for(int i=0; i<key; i++)
        {
            cin>>st;
            myset.insert(st);
        }
        string line;
        vector<string>e;
        vector<int>v;
        int maxi=0;
        getchar();
        for(int i=0; i<exc; i++)
        {
            getline(cin,line);
            e.push_back(line);
            int cnt = 0;
            string s = "";
            for(int j=0; j<line.size(); j++)
            {
                if(isalpha(line[j]))
                {
                    if(line[j]>='A' && line[j]<='Z') line[j]=line[j]+32;
                    s = s + line[j];
                }
                else
                {
                    for(it = myset.begin(); it!=myset.end(); ++it)
                    {
                        if(*it==s)
                        {
                            cnt++;
                        }
                    }
                    s="";
                }
            }
            v.push_back(cnt);
            maxi = max(cnt,maxi);
        }
        printf("Excuse Set #%d\n",++caseno);
        for(int i=0; i<exc; i++)
        {
            if(v[i]==maxi)
                cout<<e[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
