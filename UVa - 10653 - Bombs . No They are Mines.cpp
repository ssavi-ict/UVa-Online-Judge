#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

char graph[1001][1001];
int cost[1001][1001];
int fx[]={1, -1, 0, 0};
int fy[]={0, 0, 1, -1};
int mine;
int r, c;

void bfs(int sx, int sy)
{
    queue<pii>q;
    q.push(pii(sx,sy));
    cost[sx][sy]=0;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<=r && s>=0 && s<=c && graph[f][s]=='0' &&!cost[f][s])
            {
                cost[f][s] = cost[top.first][top.second]+1;
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{

    while(scanf("%d %d",&r, &c) && r && c)
    {
        memset(graph,'0',sizeof(graph));
        memset(cost,0,sizeof(cost));
        int rows;
        int cols, rownum, colnum;
        cin>>rows;
        for(int i=0; i<rows; i++)
        {

            cin>>rownum>>cols;
            for(int j=0; j<cols; j++)
            {
                cin>>colnum;
                graph[rownum][colnum]='1';
            }
        }
        int srcx, srcy, destx, desty;
        cin>>srcx>>srcy;
        bfs(srcx, srcy);
        cin>>destx>>desty;
        cout<<cost[destx][desty]<<endl;
    }
    return 0;
}
