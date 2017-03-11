#include<bits/stdc++.h>

using namespace std;

bool cmp(string x, string y)
{
    string s1 = x + y;
    string s2 = y + x;
    if(s1>s2) return true;
    else return false;
}

int main()
{
    vector<string>v;
    int n;
    string num;
    while(scanf("%d",&n) && n!=0)
    {
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<n; i++)
            cout<<v[i];
        printf("\n");
    }
    return 0;
}
