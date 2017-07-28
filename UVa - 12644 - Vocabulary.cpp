#include<bits/stdc++.h>

using namespace std;

vector<string>inp;
bool flag[505];

int main()
{
    int m, n;
    while(scanf("%d %d", &m,&n)==2)
    {
        string s, x;
        for(int i=0; i<m; i++)
        {
            cin>>s;
            inp.push_back(s);
        }
        int cnt = 0;
        memset(flag,false,sizeof(flag));
        for(int i=0; i<n; i++)
        {
            cin>>s;
            int sz = s.size();
            for(int j=0; j<m; j++)
            {
                if(!flag[j])
                {
                    x = inp[j];
                    int szx = x.size();
                    bool found;
                    for(int l=0; l<sz; l++)
                    {
                        found = false;
                        for(int t=0; t<szx; t++)
                        {
                            if(s[l]==x[t])
                            {
                                x[t] = '.';
                                found = true;
                                break;
                            }
                        }
                        if(!found) break;
                    }
                    if(found) { cnt++; flag[j]=true; break;}
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
