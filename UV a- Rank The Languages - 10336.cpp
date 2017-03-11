#include<bits/stdc++.h>
#define pii pair<int,int>
#define clear(a) memset(a,0,sizeof(a))

using namespace std;

char graph[240][240];
bool visited[240][240];
int counter[240];
int fx[]={1, 0, -1, 0};
int fy[]={0, 1, 0, -1};
int r, c;
char got;

struct ranking{
char p;
int f;
}mat[240];

bool cmp(ranking a, ranking b)
{
    if(a.f==b.f)
        return a.p<b.p;
    return a.f>b.f;
}

void bfs(int x, int y)
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
            if((f>=0 && f<r) && (s>=0 && s<c) && !visited[f][s] && graph[f][s]==got)
            {
                visited[f][s]=true;
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int test, caseno=0;
    cin>>test;
    while(test--)
    {
        clear(counter);
        clear(visited);
        cin>>r>>c;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>graph[i][j];
            }
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(!visited[i][j])
                {
                    char ch = graph[i][j];
                    got = ch;
                    counter[ch]++;
                    bfs(i,j);
                }
            }
        }
        int index = 0;
        for(int i='a'; i<='z'; i++)
        {
            if(counter[i]>0)
            {
                mat[index].p = i;
                mat[index].f = counter[i];
                index++;
            }
        }
        sort(mat, mat+index, cmp);
        printf("World #%d\n",++caseno);
        for(int i=0; i<index; i++)
        {
            cout<<(char)mat[i].p<<": "<<mat[i].f<<endl;
        }
    }
    return 0;
}
