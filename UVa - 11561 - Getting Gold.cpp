#include<bits/stdc++.h>
#define pii pair<int,int>
#define clear(a) memset(a,0,sizeof(a))
#define clar(a,b) memset(a,b,sizeof(a))


int r, c, cont;
char graph[51][51];
bool visited[51][51];
int fx[]={1, -1, 0, 0};
int fy[]={0, 0, 1, -1};

using namespace std;

int bfs(int x, int y)
{
    if(graph[x-1][y]=='T')
        return cont;
    else if(graph[x][y-1]=='T')
        return cont;
    else if(graph[x+1][y]=='T')
        return cont;
    else if(graph[x][y+1]=='T')
        return cont;
    queue<pii>q;
    q.push(pii(x,y));
    visited[x][y]=true;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            abc:
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<r && s>=0 && s<c && !visited[f][s] && graph[f][s]!='#' )
            {
                visited[f][s]=true;
                if(graph[f][s]=='G')
                    cont++;
                if(graph[f-1][s]=='T')
                    goto abc;
                if(graph[f][s-1]=='T')
                    goto abc;
                if(graph[f+1][s]=='T')
                    goto abc;
                if(graph[f][s+1]=='T')
                    goto abc;
                q.push(pii(f,s));
            }
        }
    }
    return cont;
}

int main()
{
    while(scanf("%d %d", &c, &r)==2)
    {
        clear(visited);
        clar(graph,'\0');
        getchar();
        int point1, point2;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='P')
                {
                    point1 = i;
                    point2 = j;
                }
            }
        }
        cont = 0;
        int gold = bfs(point1,point2);
        cout<<gold<<endl;
    }
    return 0;
}
