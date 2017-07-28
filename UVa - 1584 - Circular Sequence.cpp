#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        cin>>s;
        int sz = s.size();
        string next , now, temp=s;
        for(int i=0; i<sz; i++)
        {
            next = next+s[i];
            now = "";
            for(int j=i+1; j<sz; j++)
            {
                now = now + s[j];
            }
            now = now + next;
            if(now<temp)
               temp = now;
        }
        cout<<temp<<endl;
    }
    return 0;
}
