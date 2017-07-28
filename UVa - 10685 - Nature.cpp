#include<bits/stdc++.h>

using namespace std;

int parent[5005];
int rankof[5005];

void init(int c)
{
    for(int i=1; i<=c+1; i++)
    { parent[i] = i; rankof[i] = 1; }
}

int findnode(int x, int parent[])
{
    if(parent[parent[x]]!=parent[x])
        parent[x] = findnode(parent[x],parent);
    return parent[x];
}

void makeunion(int x, int y, int parent[], int rankof[])
{
    int u = findnode(x,parent), v = findnode(y,parent);
    if(u==v) return;
    if(rankof[u]>=rankof[v])
    {
        rankof[u] = rankof[u]+rankof[v];
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
    int c, r;
    while(scanf("%d %d", &c, &r)==2)
    {
        if(c==0 && r==0) break;
        map<string, int>mymap;
        mymap.clear();
        string name;
        for(int i=1; i<=c; i++)
        {
            cin>>name;
            mymap[name]=i;
        }
        string one, two;
        init(c);
        for(int i=0; i<r; i++)
        {
            cin>>one>>two;
            makeunion(mymap[one],mymap[two],parent,rankof);
        }
        int maxi=0;
        for(int i=1; i<=c; i++)
        {
            if(findnode(i,parent)==i)
            {
                if(rankof[i]>maxi)
                    maxi = rankof[i];
            }
        }
        //if(maxi<=1) printf("0\n");
         printf("%d\n",maxi);
        getchar();
    }
    return 0;
}
