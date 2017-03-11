#include<bits/stdc++.h>
#include<cstring>
#define pii pair<int, int>
#define clr(a,b) (a,b,sizeof(a))


using namespace std;
char v[101][101];
bool visited[101][101];
int cost[101][101];
int m, n, tot;

int fx[]={0,0,1,1,-1,-1,1,-1};
int fy[]={1,-1,1,-1,1,-1,0,0};

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    visited[x][y]=true;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        tot++;
        for(int i=0; i<8; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if((f>=0 && f<m) && (s>=0 && s<n) && v[f][s]=='W' && !visited[f][s])
            {
                visited[f][s] = true;
                q.push(pii(f,s));
            }
        }
    }
    for(int i=0; i<101; i++)
        for(int j=0; j<101; j++)
            visited[i][j] = false;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    int space = 0;
    while(t--)
    {
        m = n = 0;
        char s[100];
        if(space>0) printf("\n");
        space = 1;
        while(gets(s))
        {
           if(strcmp(s,"")==0)
               break;
           else if(isdigit(s[0]))
           {
               int r, c;
               sscanf(s,"%d %d",&r,&c);
               tot = 0;
               bfs(r-1,c-1);
               printf("%d\n",tot);
           }
           else
           {
               strcpy(v[m],s);
               n = strlen(s);
               m++;
           }

        }
    }
    return 0;
}

/*
1

LLLLLLLLL
LLWWLLWLL
LWWLLLLLL
LWWWLWWLL
LLLWWWLLL
LLLLLLLLL
LLLWWLLWL
LLWLWLLLL
LLLLLLLLL
2 7
*/
