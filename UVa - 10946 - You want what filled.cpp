#include<bits/stdc++.h>
#define pii pair<int , int>

using namespace std;

char graph[100][100], ch;

int m, n;
int fx[]={0, 0, 1, -1};
int fy[]={1, -1, 0, 0};

struct matrix{
 int s;
 char p;
}g[3000];

bool cmp(matrix left, matrix right)
{
    if(left.s==right.s)
        return left.p<right.p;
    return left.s>right.s;
}

int bfs(int x, int y)
{
    int cell = 0;
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]='.';
    while(!q.empty())
    {
        cell++;
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if((f>=0 && f<m) && (s>=0 && s<n) && graph[f][s]==ch)
            {
                graph[f][s]='.';
                q.push(pii(f,s));
            }
        }
    }
    return cell;
}

int main()
{
    int t = 0;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0 && n==0)  break;
        getchar();
        for(int i=0; i<m; i++)
        {
            gets(graph[i]);
        }
        int f = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(graph[i][j]!='.')
                {
                    ch = graph[i][j];
                    g[f].p = ch;
                    //bfs(i,j);
                    g[f].s = bfs(i,j);
                    f++;
                }
            }
        }
        sort(g,g+f,cmp);
        printf("Problem %d:\n",++t);
        for(int i=0; i<f; i++)
            printf("%c %d\n", g[i].p, g[i].s);
        for(int i=0; i<=f; i++)
        {
            g[i].p='\0';
            g[i].s=0;
        }
    }
    return 0;
}
