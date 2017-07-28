#include<stdio.h>
#include<string.h>
#include<math.h>

int parent[30002];
int rankof[30002];

void init(int n)
{
    int i;
    for(i=1; i<=n; i++)
        { parent[i] = i; rankof[i] = 1;}
}

int findnode(int x, int parent[])
{
    if(parent[parent[x]]!=parent[x])
        parent[x] = findnode(parent[x], parent);
    return parent[x];
}

void makeunion(int x, int y, int parent[], int rankof[])
{
    int u = findnode(x, parent);
    int v = findnode(y, parent);
    if(u==v) return;
    if(rankof[u]>=rankof[v])
    {
        rankof[u] = rankof[u] + rankof[v];
        parent[v] = u;
    }
    else
    {
        rankof[v] = rankof[v] + rankof[u];
        parent[u] = v;
    }
    return;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n, m, x, y, i;
        scanf("%d %d",&n, &m);
        init(n);
        for(i=0; i<m; i++)
        {
            scanf("%d %d", &x, &y);
            makeunion(x,y,parent,rankof);
        }
        int maxi = 0;
        for(i=1; i<=n; i++)
        {
            if(findnode(i,parent)==i)
            {
                if(rankof[i]>maxi)
                    maxi = rankof[i];
            }
        }
        printf("%d\n",maxi);
    }
    return 0;
}
