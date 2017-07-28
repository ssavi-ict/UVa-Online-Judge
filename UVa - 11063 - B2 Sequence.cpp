#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, caseno=0;
    while(scanf("%d",&n)==1)
    {
        vector<int>v;
        vector<int>sum;
        y = 0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        printf("Case #%d: ",++caseno);
        bool ok = true;
        if(v[0]<1)
            { cout<<"It is not a B2-Sequence."<<endl<<endl; continue; }
        for(int i=0 ; i<n-1; i++)
        {
            if(v[i]>=v[i+1])
              { ok = false; cout<<"It is not a B2-Sequence."<<endl<<endl;  break; }
        }
        if(ok)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=i; j<n; j++)
                    sum.push_back(v[i]+v[j]);
            }
            sort(sum.begin(),sum.end());
            for(int i=1; i<sum.size(); i++)
            {
                if(sum[i]==sum[i-1])
                     { ok = false; cout<<"It is not a B2-Sequence."<<endl<<endl;  break; }
            }
        }
        if(ok)
             {cout<<"It is a B2-Sequence."<<endl<<endl;}
    }
    return 0;
}
