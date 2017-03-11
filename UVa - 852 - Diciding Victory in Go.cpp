#include<bits/stdc++.h>
#define pii pair<int,int>
#define CLR(a,b) memset(a,b,sizeof(a))
using namespace std;

char graph[15][15];
bool visited[15][15];
int b, w, tot;
int fx[]={0, 0, 1, -1};
int fy[]={1, -1, 0, 0};
bool flag;

void bfs(int x, int y, char ch)
{
    queue<pii>q;
    q.push(pii(x,y));
    visited[x][y]=true;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<9 && s>=0 && s<9 && !visited[f][s] && graph[f][s]!=ch)
            {
                if(graph[f][s]!='.')
                {
                    flag = false;
                    return;
                }
                visited[f][s]=true;
                q.push(pii(f,s));
            }
        }
    }
}
void fillbfs(int x, int y, char ch)
{
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]=ch;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<9 && s>=0 && s<9)
            {
                if(graph[f][s]!='.')
                {
                    return;
                }
                graph[f][s]=ch;
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        for(int i=0; i<9; i++)
        {
            scanf("%s",graph[i]);
        }
        int black =0, white=0;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(graph[i][j]=='.')
                {
                    CLR(visited,false);
                    flag = true;
                    bfs(i, j, 'X');
                    if(flag) fillbfs(i,j,'X');
                    CLR(visited,false);
                    flag = true;
                    bfs(i, j, 'O');
                    if(flag) fillbfs(i,j,'O');
                }
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(graph[i][j]=='X') black++;
                else if(graph[i][j]=='O') white++;
            }
        }
        printf("Black %d White %d\n", black, white);

    }
    return 0;
}
