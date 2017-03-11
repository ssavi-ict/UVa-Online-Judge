#include<bits/stdc++.h>
#include<cstring>
#define pii pair<int, int>
#define clr(a,b) (a,b,sizeof(a))


using namespace std;
char v[105][105];
int m, n, tot;
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};

void bfs(int x, int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    v[x][y]='1';
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        tot++;
        for(int i=0; i<4; i++)
        {
            int f = top.first + fx[i];
            int s = top.second + fy[i];
            if((f>=0 && f<m) && (s>=0 && s<n) && v[f][s]=='0')
            {
                v[f][s]='1';
                q.push(pii(f,s));
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        m = n = 0;
        char s[105];
        int sr, sc;
        scanf("%d %d", &sr, &sc);
        --sr; --sc;
        getchar();
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
        tot = 0;
        bfs(sr, sc);
        printf("%d\n", tot);
        if(t)
            cout<<endl;

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

