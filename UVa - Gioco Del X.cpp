#include<bits/stdc++.h>

using namespace std;
char v[205][205];
#define pii pair<int, int>
bool flag = false;
int m;
int fx[]={-1, -1, 0, 0, 1, 1};
int fy[]={-1, 0, -1, 1, 0, 1};

void bfs(int x, int y, int row)
{
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int i=0; i<6; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if(f==row && v[row][s]=='b')
            {
                flag = true;
                return;
            }
            if((f>=0 && f<m) && (s>=0 && s<m) && v[f][s]=='b' )
            {
                v[f][s] = 'w';
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int caseno=0;
    while(scanf("%d", &m)==1 && m!=0)
    {
       flag = false;
       for(int i=0; i<m; i++)
       {
           for(int j=0;j<m; j++)
              {
                  cin>>v[i][j];
              }
       }

       for(int j=0; j<m; j++)
       {
           if(v[0][j]=='b')
           {
               bfs(0,j,m-1);
           }
       }
       printf("%d ",++caseno);
       if(flag)
           printf("B\n");
       else
           printf("W\n");

    }
    return 0;
}
