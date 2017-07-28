#include<bits/stdc++.h>

using namespace std;

int matA[3][3];
int matB[3][3];
char grid[3][3];

bool iszero()
{
    int zero = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(matA[i][j]==0)  zero++;
    if(zero==9)
        return true;
    else return false;
}

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%1d",&matA[i][j]);
            }
        }
        int moves = 0;
        while(!iszero())
        {
            matB[0][0] = (matA[1][0] + matA[0][1])%2;
            matB[0][1] = (matA[0][0] + matA[0][2] + matA[1][1])%2;
            matB[0][2] = (matA[0][1] + matA[1][2])%2;
            matB[1][0] = (matA[0][0] + matA[1][1] + matA[2][0])%2;
            matB[1][1] = (matA[0][1] + matA[1][0] + matA[1][2] + matA[2][1])%2;
            matB[1][2] = (matA[0][2] + matA[1][1] + matA[2][2])%2;
            matB[2][0] = (matA[1][0] + matA[2][1])%2;
            matB[2][1] = (matA[2][0] + matA[1][1] + matA[2][2])%2;
            matB[2][2] = (matA[1][2] + matA[2][1])%2;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    matA[i][j] = matB[i][j];
            memset(matB,0,sizeof(matB));
            moves++;
        }
        printf("%d\n",moves-1);
    }
    return 0;
}
