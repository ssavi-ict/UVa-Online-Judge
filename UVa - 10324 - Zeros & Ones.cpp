#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000001];
    vector<int>ones;
    int caseno=0;
    while(scanf("%s",s)!=EOF)
    {
        int sz = strlen(s);
        int cnt = 0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='1') cnt++;
            ones.push_back(cnt);
        }
        int query, x, y;
        scanf("%d",&query);
        printf("Case %d:\n",++caseno);
        for(int i=0; i<query; i++)
        {
            scanf("%d %d", &x, &y);
            if(x>y) swap(x,y);
            if(s[x]!=s[y]) printf("No\n");
            else
            {
                if((ones[y]==ones[x]) || ((y-x)==(ones[y]-ones[x])))
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
        ones.clear();
    }
    return 0;
}
