#include<bits/stdc++.h>
#define pii pair<int,int>
#define fresh(a,b) memset(a,b,sizeof(a))

using namespace std;

int main()
{
    int n, e;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        scanf("%d",&e);
        vector<int>graph[100001];
        int visited[10000];
        fresh(visited,-1);
        for(int i=0; i<e; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        bool flag = false;
        queue<int>q;
        visited[0]=0;
        q.push(0);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int i=0; i<graph[u].size(); i++)
            {
                int v = graph[u][i];
                if(visited[v]==-1)
                {
                    if(visited[u]==0)
                        visited[v]=1;
                    else
                        visited[v]=0;
                    q.push(v);
                }
                else
                {
                    if(visited[u]==visited[v])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        if(!flag)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
        //for(int i=0; i<100000; i++)
            //graph[i].clear();
    }
    return 0;
}
