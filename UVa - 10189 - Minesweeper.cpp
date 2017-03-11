#include<bits/stdc++.h>

using namespace std;

int fx[]={0, 0, 1, -1, -1, 1, 1, -1};
int fy[]={1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    int r, c, caseno=0, space=0;
    while(scanf("%d %d",&r, &c)==2 && r!=0 && c!=0)
    {
        getchar();
        char grid[200][200];
        for(int i=0; i<r; i++)
        {
            gets(grid[i]);
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<strlen(grid[i]); j++)
            {
                int cnt = 0;
                if(grid[i][j]=='.')
                {

                    for(int l=0; l<8; l++)
                    {
                        int f = i + fx[l];
                        int s = j + fy[l];
                        if(f>=0 && f<r && s>=0 && s<c && grid[f][s]=='*')
                            cnt++;
                    }
                    grid[i][j]=cnt+'0';
                }
            }
        }
        if(space==1)
            printf("\n");
        space = 1;
        printf("Field #%d:\n",++caseno);
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<strlen(grid[i]); j++)
            {
                printf("%c",grid[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
