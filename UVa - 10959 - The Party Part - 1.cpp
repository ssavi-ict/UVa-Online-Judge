#include<bits/stdc++.h>
#define CLR(a,b) memset(a,b,sizeof(a))

using namespace std;

vector<int>graph[1005];
bool visited[1005];
int level[1005];
int node, edges;

void bfs(int x)
{
    CLR(visited,false);
    CLR(level, 0);
    queue<int>q;
    visited[x]=true;
    level[x]=0;
    q.push(x);
    while(!q.empty())
    {
        int u = q.front();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                level[v]=level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
    for(int i=1; i<node; i++)
        printf("%d\n", level[i]);
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d", &node, &edges);
        for(int i=0; i<edges; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        bfs(0);
        if(test)
            printf("\n");
        for(int i=0; i<1000; i++)
            graph[i].clear();
    }
    return 0;
}

