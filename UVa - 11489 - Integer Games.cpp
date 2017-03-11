#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, caseno=0;
    string a;
    scanf("%d",&t);
    getchar();
    for(int k=0; k<t; k++)
    {
        getline(cin,a);
        int digsum = 0, res, cnto=0;
        for(int i=0; i<a.size(); i++)
        {
          digsum = digsum + (a[i]-'0');
        }
        int s = 0;
        int t = 0;
        abc:
        int sz = a.size();
        for(int i=0; i<sz;  i++)
        {
            res = digsum - (a[i]-'0');
            if(sz==1)
            {
                if(s==t)
                    s++;
                else
                    t++;
            }
            else if(res%3==0)
            {
                digsum = res;
                a.erase(a.begin()+i);
                if(s==t)
                    s++;
                else
                    t++;
                goto abc;
            }
        }
        if(s>t)
            printf("Case %d: S\n", ++caseno);
        else
            printf("Case %d: T\n", ++caseno);
    }
    return 0;
}
