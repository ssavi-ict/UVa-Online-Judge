#include<bits/stdc++.h>
#define clar(a,b) memset(a,b,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

using namespace std;

vector<int>graph[205];
bool visited[205];
queue<int>q;

int fall;

int bfs(int x)
{
    int fall = 0;
    q.push(x);
    visited[x]=true;
    while(!q.empty())
    {
        int u = q.front();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                fall++;
                q.push(v);
            }
        }
        q.pop();
    }
    return fall;
}

int main()
{
    int t, n;
    while(scanf("%d",&t) && t!=0)
    {
        clr(graph);
        for(int i=1; i<=t; i++)
        {
            int x, y;
            scanf("%d",&x);
            for(int j=1; j<=x; j++)
            {
                scanf("%d",&y);
                graph[i].push_back(y);
            }
        }
        int value, child=-1, level;
        for(int i=1; i<=t; i++)
        {
            clar(visited,false);
            value=bfs(i);
            if(value>child)
                { child = value; level = i; }
        }
        //bfs();
        printf("%d\n",level);
    }
    return 0;
}
