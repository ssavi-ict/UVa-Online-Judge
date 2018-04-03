#include<bits/stdc++.h>
#define i64 long long

using namespace std;

char mat[15][15];
int lvl[15][15];

int main()
{
    int n, m, s;
    while(scanf("%d %d %d", &n, &m, &s)==3 && n && m && s){
        for(int i=0; i<n; i++){
            scanf("%s", &mat[i]);
        }
        memset(lvl, -1, sizeof lvl);
        char O = 'N';
        int x = 0, y = s-1;
        lvl[x][y] = 0;
        while(true){
            int tx = x, ty = y;
            if(mat[tx][ty]=='N'){
                tx--;
            }
            else if(mat[tx][ty]=='S'){
                tx++;
            }
            else if(mat[tx][ty]=='E'){
                ty++;
            }
            else{
                ty--;
            }

            //cout<<tx<<' '<<ty<<endl;

            if(tx<0 || tx==n || ty<0 || ty==m){
                printf("%d step(s) to exit\n", lvl[x][y]+1);
                break;
            }

            if(lvl[tx][ty]==-1){
                lvl[tx][ty] = lvl[x][y] + 1;
            }
            else{
                printf("%d step(s) before a loop of %d step(s)\n", lvl[tx][ty], lvl[x][y]-lvl[tx][ty]+1);
                break;
            }

            x = tx, y = ty;
        }
    }
}
