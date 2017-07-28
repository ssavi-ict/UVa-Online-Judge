#include<bits/stdc++.h>

using namespace std;

vector<int>graph[301];
int visited[305];

int main()
{
    int nodes;
    while(scanf("%d",&nodes)==1 && nodes)
    {
        int x, y;
        while(scanf("%d %d",&x, &y)==2 && x && y)
        {
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        memset(visited,-1,sizeof(visited));
        bool flag = true;
        queue<int>q;
        q.push(1);
        visited[1] = 0;
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
                        visited[v] = 1;
                    else
                        visited[v] = 0;
                    q.push(v);
                }
                if(visited[v]==visited[u])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
        for(int i=0; i<=300; i++)
            graph[i].clear();
    }
    return 0;
}
