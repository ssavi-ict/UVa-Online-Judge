#include<bits/stdc++.h>

using namespace std;

bool flag;

struct data{
int u, v;
};

vector<data>graph;
int parent[100];

void init(int n)
{
    for(int i=1; i<=n; i++)
        parent[i] = i;
}

int findnode(int n)
{
    (parent[n]!=n)?findnode(parent[n]):parent[n];
}

bool MST(int n)
{
    init(n);
    sort(graph.begin(),graph.end());
    int szg = graph.size();

    int cost = 0, cnt=0;
    for(int i=0; i<szg; i++)
    {
        int u = findnode(graph[i].u);
        int v = findnode(graph[i].v);
        if(u==v) { cout<<graph[i].u<<' '<<graph[i].v<<" Cycle"<<endl; return false; }
        if(u!=v)
        {
            parent[v] = u;
            cnt++;
            //cost = cost + graph[i].w;
            if(cnt==n-1) break;
        }
    }
    return true;
}


int main()
{
    int nodes=-99, edges, u, v, w;
    //scanf("%d %d", &nodes, &edges);
    while(scanf("%d %d", &u, &v)==2 && u!=-1 && v!=-1)
    {
        if(u==0 && v==0)
        {
            flag = true;
            MST(nodes);
            nodes=-99;
            if(flag) printf("Tree\n");
            else printf("Not Tree\n");
            graph.clear();
        }
        nodes = max(nodes,max(u,v));
        data var;
        var.u = u; var.v = v;
        graph.push_back(var);
    }

   // printf("%d\n",MST(nodes));
    return 0;
}
