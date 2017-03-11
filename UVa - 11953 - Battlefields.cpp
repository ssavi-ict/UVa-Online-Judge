#include<bits/stdc++.h>
#define pii pair<int, int>
#define CLR(a,b) memset(a,b,sizeof(a))
using namespace std;

int n;
char graph[105][105];
int fx[]={1, -1, 0, 0};
int fy[]={0, 0, 1, -1};

void bfs(int x, int y)
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
            if(f>=0 && f<n && s>=0 && s<n && (graph[f][s]=='x' || graph[f][s]=='@'))
            {
                graph[f][s]='.';
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int test, caseno=0;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%d",&n);
        getchar();
        for(int i=0; i<n; i++)
            scanf("%s",graph[i]);
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(graph[i][j]=='x')
                {
                    cnt++;
                    bfs(i,j);
                }
            }
        }
        printf("Case %d: %d\n", ++caseno, cnt);
    }
    return 0;
}
