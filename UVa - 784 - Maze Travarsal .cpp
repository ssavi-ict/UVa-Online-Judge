#include<bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

char graph[100][100];
int fx[]={0, 0, 1, -1};
int fy[]={1, -1, 0, 0};
int m, n;

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]='#';
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f>=0 && f<m && s>=0 && s<n && graph[f][s]==' ')
            {
                graph[f][s]='#';
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
        char s[100];
        char last[100];
        m=n=0;
        while(gets(s))
        {
            if(s[0]=='_')
            {
                strcpy(last,s);
                break;
            }
            else
            {
                strcpy(graph[m],s);
                m++;
                if(strlen(s)>n)
                    n = strlen(s);
            }
        }
        bool flag = false;
        int sr, sc;
        for(int i=0; i<m; i++)
        {
            for(int j=0; graph[i][j]!='\0'; j++)
            {
                if(graph[i][j]=='*')
                {
                    sr = i;
                    sc = j;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        bfs(sr,sc);
        for(int i=0; i<m; i++)
        {
            for(int j=0; graph[i][j]!='\0'; j++)
            {
                printf("%c",graph[i][j]);
            }
            printf("\n");
        }
        printf("%s\n",last);
    }
    return 0;
}
