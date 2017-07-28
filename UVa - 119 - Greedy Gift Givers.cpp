#include<bits/stdc++.h>
#define pii pair<string, int>

using namespace std;

int main()
{
    int men, newline=0;
    while(scanf("%d",&men)==1)
    {
        //set<string>ms;
        if(newline==1)
            printf("\n");
        newline = 1;
        map<string,int>mp;
        map<string,int>::iterator it;
        vector<string>mv;
        string s;
        for(int i=0; i<men; i++)
        {
            cin>>s;
            getchar();
            mv.push_back(s);
            mp.insert(pii(s,0));
        }
        /*for(it=mp.begin(); it!=mp.end(); ++it)
        {
            cout<<it->first<<' '<<it->second<<endl;
        }*/
        string giver, get;
        int gn, gamount;
        for(int i=0; i<men; i++)
        {
            cin>>giver;
            getchar();
            cin>>gamount>>gn;
            if(gn>0)
            {
                int avg = (gamount/gn)*gn;
                for(it=mp.begin(); it!=mp.end(); ++it)
                {
                    if(it->first==giver)
                        { it->second = it->second + (-1)*avg;  break;}
                }
                int geta = gamount/gn;
                for(int i=0; i<gn; i++)
                {
                    cin>>get;
                    getchar();
                    for(it=mp.begin(); it!=mp.end(); ++it)
                    {
                        if(it->first==get)
                            { it->second = it->second + geta; }
                    }
                }
            }
        }
        for(int i=0; i<men; i++)
        {
            for(it=mp.begin(); it!=mp.end(); ++it)
            {
                if(it->first==mv[i])
                    { cout<<it->first<<' '<<it->second<<endl;}
            }
        }
    }
    return 0;
}
