#include<bits/stdc++.h>
#define pii pair<int,int>
#define CLR(a,b) memset(a,b,sizeof(a))

using namespace std;

int r, c, tot;
char sky[150][150];
int fx[]={0, 0, 1, -1, 1, -1, 1, -1};
int fy[]={1, -1, 0, 0, 1, -1, -1, 1};

int main()
{
    while(scanf("%d %d", &r, &c)==2)
    {
        if(r==0 && c==0) break;
        getchar();
        for(int i=0; i<r; i++)
        {
            scanf("%s",sky[i]);
        }
        int cnt = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
               bool flag = false;
               if(sky[i][j]=='*')
               {
                   for(int l=0; l<8; l++)
                   {
                       int f = i + fx[l];
                       int s = j + fy[l];
                       if(f>=0 && f<r && s>=0 && s<c && sky[f][s]=='*')
                       {
                           flag = true; break;
                       }
                   }
                   if(!flag) cnt++;
               }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
