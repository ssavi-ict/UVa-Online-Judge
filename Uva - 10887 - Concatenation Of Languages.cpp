#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, caseno = 0;
    cin>>t;
    while(t--)
    {
        int m, n;
        string s, t;
        vector<string>vec1;
        vector<string>vec2;
        cin>>m>>n;
        getchar();
        for(int i=1; i<=m; i++)
        {
            getline(cin,s);
            vec1.push_back(s);
        }
        for(int i=1; i<=n; i++)
        {
            getline(cin,s);
            vec2.push_back(s);
        }
        set<string>myset;
        for(int i=0; i<vec1.size(); i++)
        {
            for(int j=0; j<vec2.size();j++)
            {
                t = vec1[i] + vec2[j];
                myset.insert(t);
            }
        }
        int sz = myset.size();
        printf("Case %d: %d\n",++caseno, sz);
    }
    return 0;
}
