#include<bits/stdc++.h>
#define i64 long long

using namespace std;

bool grave[105][105];
char command[105];

int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m)==2){
        memset(grave, false, sizeof grave);
        int x, y; char O;
        while(scanf("%d %d %c", &x, &y, &O)==3){
            scanf("%s", &command);
            int len = strlen(command);
            for(int i=0; i<len; i++){
                if(command[i]=='F'){
                    int tx = x, ty = y;
                    if(O=='N') ty++;
                    else if(O=='S') ty--;
                    else if(O=='E') tx++;
                    else tx--;
                    if(tx<0 || tx>n || ty<0 || ty>m){
                        if(!grave[x][y]){
                            grave[x][y] = true;
                            printf("%d %d %c LOST\n", x, y, O); goto label;
                        }
                    }
                    else{
                        x = tx; y = ty;
                    }
                }
                else if(command[i]=='R'){
                    if(O=='N') O = 'E';
                    else if(O=='E') O = 'S';
                    else if(O=='S') O = 'W';
                    else O = 'N';
                }
                else{
                    if(O=='N') O = 'W';
                    else if(O=='E') O = 'N';
                    else if(O=='S') O = 'E';
                    else O = 'S';
                }
                //printf("%d %d %c\n", x, y, O);
            }

            printf("%d %d %c\n", x, y, O);
            label:;
        //getchar();
        }
    }

}
