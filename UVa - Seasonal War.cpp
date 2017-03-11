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
            if((f>=0 && f<=m) && (s>=0 && s<=m) && v[f][s]=='1' )
            {
                v[f][s] = '0';
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int caseno=0;
    while(scanf("%d", &m)==1)
    {
       for(int i=0; i<m; i++)
       {
           cin>>v[i];
       }
       int count=0;
       for(int i=0; i<m; i++)
       {
           for(int j=0; j<m; j++)
           {
               if(v[i][j]=='1')
               {
                   count++;
                   bfs(i,j);
               }
           }
       }
       printf("Image number %d contains %d war eagles.\n",++caseno, count);
    }
    return 0;
}
