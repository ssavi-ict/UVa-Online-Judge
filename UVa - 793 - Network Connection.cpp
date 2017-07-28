#include<bits/stdc++.h>

using namespace std;

int parent[30000+1];
int rankof[30000+1];

int findnode(int n, int parent[])
{
    if(parent[parent[n]]!=parent[n])
        parent[n] = findnode(parent[n],parent);
    return parent[n];
}

void makeunion(int x, int y, int parent[], int rankof[])
{
    int u = findnode(x, parent);
    int v = findnode(y, parent);
    if(u!=v)
    {
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
    }
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        //getchar();
        scanf("%d",&n);
        getchar();
        for(int i=1; i<n+1; i++) { parent[i] = i;  rankof[i] = 1; }
        char str[100], ch;
        int s, d;
        int cnt=0, q=0;
        while(gets(str) && strlen(str)>0)
        {
            sscanf(str,"%c %d %d", &ch, &s, &d);
            int l = 0;
            if(ch=='c')
            {
                makeunion(s,d,parent,rankof);
            }
            else if(ch=='q')
            {
                if(findnode(s,parent)==findnode(d,parent)) cnt++;
                else q++;
            }
        }
        printf("%d,%d\n",cnt, q);
        if(test) printf("\n");
    }
    return 0;
}
