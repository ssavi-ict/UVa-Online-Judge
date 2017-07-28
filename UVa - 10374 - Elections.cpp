#include<bits/stdc++.h>
#define piis pair<string,string>
#define pii pair<string,int>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        map<string,int>mymap;
        map<string,int>::iterator it;
        vector<string>myvector;
        vector<string>votelist;
        string name , party, vote;
        for(int i=0; i<n; i++)
        {
            getline(cin,name);
            getline(cin,party);
            mymap.insert(pii(name,0));
            myvector.push_back(party);
        }
        int voteno, maxi=0, cnt;
        scanf("%d",&voteno);
        for(int i=0; i<voteno; i++)
        {
            getline(cin,vote);
            votelist.push_back(vote);
        }
        maxi=0;
        bool flag = true;
        string res;
        for(it=mymap.begin(); it!=mymap.end(); ++it)
        {
            int cnt = 0;
            for(int i=0; i<voteno; i++)
            {
                if(it->first==votelist[i])
                    cnt++;
            }
            it->second = cnt;
            if(cnt>maxi)
               {maxi=cnt; flag = false; res = it->first; }
            else if(cnt==maxi)
                flag == true;
        }
        if(flag)
            printf("tie\n");
        else
        {
            cout<<res<<endl;
        }
    }
    return 0;
}
