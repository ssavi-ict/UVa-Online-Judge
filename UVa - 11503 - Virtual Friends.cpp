#include<bits/stdc++.h>

using namespace std;

int rankof[200005];
int parent[200005];

void init(int n)
{
    for(int i=1; i<=n; i++)
        { parent[i] = i; rankof[i] = 1; }
}

int findnode(int x)
{
    if(parent[x]!=x)
        parent[x] = findnode(parent[x]);
    return parent[x];
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int N;
        scanf("%d",&N);
        int id = 1; string a, b;
        map<string, int>mymap;
        mymap.clear();
        init(N*2);
        for(int i=1; i<=N; i++)
        {
            cin>>a>>b;
            if(!mymap[a])
                mymap[a] = id++;
            if(!mymap[b])
                mymap[b] = id++;
            int u = findnode(mymap[a]);
            int v = findnode(mymap[b]);
            if(u!=v)
            {
                rankof[u] = rankof[v] + rankof[u];
                parent[v] = parent[u];
            }
            printf("%d\n",rankof[u]);
        }
    }
    return 0;
}
