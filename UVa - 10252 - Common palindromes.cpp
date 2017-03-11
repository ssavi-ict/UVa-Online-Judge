#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        if(s1.size()==0 || s2.size()==0)
            cout<<endl;
        else
        {
            vector<char>res;
            for(int i=0; i<s1.size(); i++)
            {
                for(int j=0; j<s2.size(); j++)
                {
                    if(s1[i]==s2[j])
                    {
                        res.push_back(s1[i]);
                        s1[i] = '.'; s2[j]='.';
                        break;
                    }
                }
            }
            sort(res.begin(),res.end());
            for(int i=0; i<res.size(); i++)
                cout<<res[i];
            printf("\n");
        }
    }
    return 0;
}
