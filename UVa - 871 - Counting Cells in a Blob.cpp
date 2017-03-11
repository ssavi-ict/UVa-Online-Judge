#include<bits/stdc++.h>
#include<cstring>
#define pii pair<int, int>
#define clr(a,b) (a,b,sizeof(a))


using namespace std;
char v[105][105];
int m, n, tot;
int fx[]={0,0,1,-1, 1, -1, 1, -1};
int fy[]={1,-1,0,0, 1, -1, -1, 1};

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    v[x][y]='0';
    //cout<<x<<' '<<y<<endl;
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        tot++;
        for(int i=0; i<8; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if((f>=0 && f<m) && (s>=0 && s<n) && v[f][s]=='1')
            {
                v[f][s]='0';
                //cout<<f<<' '<<s<<endl;
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        m = n = 0;
        char s[105];
        //getchar();
        while(gets(s))
        {
           if(strcmp(s,"")==0) break;
           else
           {
               strcpy(v[m],s);
               n = strlen(s);
               m++;
           }
        }
        int ma = 0;
        int look = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                tot = 0;
                if(v[i][j]=='1')
                {
                    //cout<<"look = "<<++look<<endl;
                    bfs(i, j);
                    //cout<<"total = "<<tot<<endl;
                    if(tot>ma)
                        ma = tot;
                }
            }
        }
        printf("%d\n", ma);
        if(t)
            cout<<endl;
    }
    return 0;
}
