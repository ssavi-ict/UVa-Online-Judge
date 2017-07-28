#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int x=0, y=0;
        for(int i=1; i<65; i++)
        {
            for(int j=1; j<65; j++)
            {
                if((i*i*i)-(j*j*j)==n)
                {
                    if( (!x && !y) || (j<y))
                    {
                        x = i; y = j;
                    }
                }
            }
        }
        if(x && y)
           printf("%d %d\n",x, y);
        else
            printf("No solution\n");
    }
    return 0;
}
