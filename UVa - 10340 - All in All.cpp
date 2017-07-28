#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    while(cin>>s>>t)
    {
        int ssize = s.size();
        int tsize = t.size();
        int cnt = 0, j=0;
        string res="";
        for(int i=0; i<tsize; i++)
        {
            if(t[i]==s[j])
            {
                res=res+t[i];
                j++;
            }
        }
        if(j==ssize && s==res)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
