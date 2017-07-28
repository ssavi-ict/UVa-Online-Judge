#include<bits/stdc++.h>
#define INF 999999999

using namespace std;

int matrix[103][103];
bool check[103];

void init()
{
    memset(check,false,sizeof(check));
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++)
        {
            if(i==j) matrix[i][j] = 0;
            else matrix[i][j] = INF;
        }
    }
}

int Floyd()
{
    for(int k=1; k<=100; k++)
    {
        for(int i=1; i<=100; i++)
        {
            for(int j=1; j<=100; j++)
            {
                matrix[i][j] = min(matrix[i][j],matrix[i][k]+matrix[k][j]);
            }
        }
    }
    int tot = 0;
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++)
        {
            if(matrix[i][j]<INF)
                tot = tot + matrix[i][j];
        }
    }
    return tot;
}

int main()
{
    int nodes=0, edges, x, y, cost;
    bool zero = false;
    int caseno = 0;
    init();
    while(scanf("%d %d",&x, &y)==2)
    {
        if(zero && x==0 & y==0) break;
        else if(!zero && x==0 && y==0)
        {
            double result = (Floyd()*1.0)/(nodes*(nodes-1));
            printf("Case %d: average length between pages = %0.3lf clicks\n", ++caseno, result);
            zero = true;
            nodes = 0;
            init();
        }
        else
        {
            matrix[x][y] = 1;
            if(!check[x])
            {
                nodes++; check[x] = true;
            }
            if(!check[y])
            {
                nodes++; check[y] = true;
            }
            zero = false;
        }
    }

    return 0;
}
