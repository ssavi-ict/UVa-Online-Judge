#include<bits/stdc++.h>

using namespace std;
int learningunit[105];
vector<int>graph[105];
int cost[105];
bool visited[105];

void bfs(int n)
{
    memset(visited,false,sizeof(visited));
    queue<int>q;
    q.push(0);
    int tot = 0;
    int sz;
    int amount;
    int vertex, finnode;
    visited[0]=true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        sz++;
        sz = 0;
        amount = 0;
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            sz++;
            if(tot+learningunit[v]>amount && !visited[v])
            {
                amount = tot+learningunit[v];
                vertex = v;
            }
            if(sz==graph[u].size())
            {
                tot = amount;
                finnode = vertex;
                q.push(vertex);
                visited[vertex]=true;
            }
        }
    }
    cout<<tot<<' '<<finnode<<endl;
}

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        int nodes, edges, lu, x, y;
        cin>>nodes>>edges;
        for(int i=0; i<nodes; i++)
        {
            scanf("%d",&learningunit[i]);
        }
        for(int i=0; i<edges; i++)
        {
            scanf("%d %d",&x, &y);
            graph[x].push_back(y);
        }
        printf("Case %d: ",caseno);
        bfs(nodes);
        for(int i=0; i<105; i++)
            graph[i].clear();
    }
    return 0;
}
