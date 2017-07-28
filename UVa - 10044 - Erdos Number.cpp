#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno = 1; caseno<=test; caseno++)
    {
        map<string, int>mymap;
        mymap.clear();
        string s, now;
        int n, p;
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            int szs = s.size();
            vector<string>myvector;
            bool iserdos = false;
            for(int j=0; j<szs; j++)
            {
                if(s[j]=='.' && s[j+1]==':')
                {
                    now = now + '.';
                    if(now=="Erdos, P.") {iserdos=true; continue; }
                    myvector.push_back(now);
                    break;
                }
                else if(s[j]=='.' && s[j+1]==',' && s[j+2]==' ')
                {
                    now = now + '.';
                    j = j + 2;
                    if(now=="Erdos, P.") {iserdos=true; now=""; continue; }
                    myvector.push_back(now);
                }
                now = now + s[j];
            }
            int szv = myvector.size();
            for(int i=0; i<szv; i++)
            {

            }
        }
    }
}
