#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int row, col, cnt;
char graph[55][55];
int fx[]={0, 0, 1, -1};
int fy[]={1, -1, 0, 0};

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]='*';
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i =0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<row && s>=0 && s<col && graph[f][s]=='X')
            {
                graph[f][s]='*';
                q.push(pii(f,s));
            }
        }
    }
}

int BFS(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]='.';
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<row && s>=0 && s<col && (graph[f][s]=='X' || graph[f][s]=='*'))
            {
                if(graph[f][s]=='*')
                {
                    graph[f][s]='.';
                }
                if(graph[f][s]=='X')
                {
                    bfs(f,s);
                    cnt++;
                }
                q.push(pii(f,s));
            }
        }
    }
    return cnt;
}

int main()
{
    int caseno = 0;
    while(scanf("%d %d",&col,&row)==2 && row && col)
    {
        vector<int>result;
        getchar();
        for(int i=0; i<row; i++) scanf("%s",graph[i]);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(graph[i][j]!='.')
                {
                    cnt = 0;
                    result.push_back(BFS(i,j));
                }
            }
        }
        sort(result.begin(),result.end());
        printf("Throw %d\n",++caseno);
        for(int i=0; i<result.size(); i++)
        {
            if(result[i]!=0)
            {
                printf("%d",result[i]);
                if(i<result.size()-1) printf(" ");
            }
        }
        printf("\n\n");
        result.clear();
    }
    return 0;
}
