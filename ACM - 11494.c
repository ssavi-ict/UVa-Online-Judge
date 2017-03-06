#include<stdio.h>
int main()
{
    int x1 , y1, x2, y2 , moves, sum1 , sum2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
        {
            break;
        }
        else
        {
            sum1 = x1+y1 ; sum2 = x2+y2;
            if(x1==x2 && y1==y2)
            {
                moves = 0;
            }
            else if ((sum1%sum2)==0 || (sum2%sum1)==0)
            {
                moves = 1;
            }
            else
            {
                moves = 2;
            }
            printf("%d\n",moves);
        }
    }
    return 0;
}
