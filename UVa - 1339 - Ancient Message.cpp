#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, res;
    while(getline(cin,a))
    {
        getline(cin,b);
        int sza = a.size();
        int szb = b.size();
        if(a==b)
        {
            printf("YES\n");continue;
        }
        if(sza!=szb)
        {
            printf("NO\n"); continue;
        }
        vector<int>acont, bcont;
        int cnt;
        for(int i = 'A'; i<='Z'; i++)
        {
            cnt = 0;
            for(int j=0; j<sza; j++)
            {
                if(i==a[j]) cnt++;
            }
            if(cnt>0) acont.push_back(cnt);
            cnt = 0;
            for(int j=0; j<szb; j++)
            {
                if(i==b[j]) cnt++;
            }
            if(cnt>0) bcont.push_back(cnt);
        }
        sort(acont.begin(), acont.end());
        sort(bcont.begin(), bcont.end());
        bool found = true;
        for(int i=0; i<acont.size(); i++)
        {
            if(acont[i]!=bcont[i])
            {
                found = false;
                break;
            }
        }
        if(found) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
