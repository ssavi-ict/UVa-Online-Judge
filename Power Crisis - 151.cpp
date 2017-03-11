#include<bits/stdc++.h>

using namespace std;

int solve(int m, int n)
{
    list< int >v;
    for(int l=1; l<=m; l++) v.push_back(l);
    while(v.size()>1)
    {
        v.pop_front();
        for(int i=1; i<n; i++)
        {
            v.push_back(v.front());
            v.pop_front();
        }
    }
    return v.front();
    v.clear();
}



int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        else
        {
           int pl;
           for(int j=1;;j++)
           {
               if(solve(n,j)==13)
                  { pl = j; break; }
           }
           printf("%d\n",pl);
        }
    }
    return 0;
}
