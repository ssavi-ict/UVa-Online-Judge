#include<bits/stdc++.h>

using namespace std;
char v[101][101];
#define pii pair<int, int>

int m, n;

int fx[]={0,0,1,1,-1,-1,1,-1};
int fy[]={1,-1,1,-1,1,-1,0,0};

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if((f>=0 && f<=m) && (s>=0 && s<=n) && v[f][s]=='@' )
            {
                v[f][s] = '*';
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    while(scanf("%d %d", &m, &n)==2)
    {
       if(m==0 && n==0) break;
       for(int i=0; i<m; i++)
       {
           cin>>v[i];
       }
       int count=0;
       for(int i=0; i<m; i++)
       {
           for(int j=0; j<n; j++)
           {
               if(v[i][j]=='@')
               {
                   count++;
                   bfs(i,j);
               }
           }
       }
       cout<<count<<endl;
    }
    return 0;
}
