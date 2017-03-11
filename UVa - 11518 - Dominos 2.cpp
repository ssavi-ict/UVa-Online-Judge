#include<bits/stdc++.h>
#define clar(a,b) memset(a,b,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

using namespace std;

vector<int>graph[10001];
bool visited[10001];
queue<int>q;

int fall;
int n, m, l, t;

int bfs()
{
    int fall = 0;
    while(!q.empty())
    {
        fall++;
        int u = q.front();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
            }
        }
        q.pop();
    }
    return fall;
}

int main()
{
    cin>>t;
    while(t--)
    {
        clr(graph);
        clar(visited,false);
        cin>>n>>m>>l;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            graph[x].push_back(y);
        }
        fall = 0;
        for(int i=0; i<l; i++)
        {
            int z;
            cin>>z;
            if(!visited[z])
            {
                q.push(z);
                visited[z] = true;
            }
        }
        //bfs();
        printf("%d\n",bfs());
    }
    return 0;
}
