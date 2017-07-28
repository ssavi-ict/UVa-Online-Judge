#include<bits/stdc++.h>

using namespace std;

vector<int>graph[10001];
int visited[200];

int main()
{
    int test, nodes, edges;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d", &nodes, &edges);
        int x, y;
        memset(visited,-1,sizeof(visited));
        //memset(checkgraph,false,sizeof(checkgraph));
        for(int i=0; i<edges; i++)
        {
            scanf("%d %d", &x, &y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int guards = 0;
        for(int j = 0; j<nodes; j++)
        {
            queue<int>q;
            if(visited[j]==-1)
            {
                q.push(j);
                visited[j]=0;
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
                            q.push(v);
                        }
                    }
                }
            }
        }
        for(int i=0; i<nodes; i++)
            cout<<visited[i]<<endl;
        bool flag = true;
        for(int i = 0; i<nodes; i++)
        {
            bool found = true;
            if(visited[i]==0)
            {
                for(int j=0; j<graph[i].size(); j++)
                {
                    int l = graph[i][j];
                    if(visited[l]!=1) { found = false; break; }
                }
                if(found) guards++;
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) printf("%d\n",guards);
        else printf("-1\n");
        for(int i=0; i<201; i++)
            graph[i].clear();
    }
    return 0;
}
