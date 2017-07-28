#include<bits/stdc++.h>
#define INF 214748364

using namespace std;

vector<string>vec;
vector<int>found;
int graph[100][100];

void init(int nodes)
{
    for(int i=1; i<=nodes; i++)
    {
        for(int j=1; j<=nodes; j++)
        {
            if(i==j) graph[i][j] = 0;
            else graph[i][j] = INF;
        }
    }
}

void floyd(int nodes)
{
    for(int k=1; k<=nodes; k++)
    {
        for(int i=1; i<=nodes; i++)
        {
            for(int j=1; j<=nodes; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }
}

int minnode(int nodes)
{
    int minimum = INT_MAX;
    int id;
    for(int i=1; i<=nodes; i++)
    {
        int sum = 0;
        for(int j=1; j<=nodes; j++)
        {
            sum = sum + graph[i][j];
        }
        if(sum<minimum)
        {
            minimum = sum;
            id = i;
        }
    }
    return id;
}

int main()
{
    int caseno = 0;
    int  nodes, edges;
    string x;
    while(scanf("%d %d",&nodes, &edges)==2 && nodes)
    {
        for(int i=0; i<nodes; i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        init(nodes);
        int u, v, cost;
        for(int i=0; i<edges; i++)
        {
            scanf("%d %d %d", &u, &v, &cost);
            graph[u][v] = graph[v][u] = cost;
        }
        printf("Case #%d : ",++caseno);
        if(edges==0)
        {
            cout<<vec[0]<<endl;
        }
        else
        {
            floyd(nodes);
            int id = minnode(nodes);
            cout<<vec[id-1]<<endl;
        }
        vec.clear();
    }
    return 0;
}
