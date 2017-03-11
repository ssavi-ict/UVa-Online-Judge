#include<bits/stdc++.h>

using namespace std;

int main()
{
    double upx[11], upy[11], downx[11], downy[11];
    double a, b, c, d;
    char ch;
    int i = 0;
    while(ch = getchar())
    {
        if(ch=='*')  break;
        if(ch=='r')
        {
            scanf("%lf %lf %lf %lf", &upx[i], &upy[i], &downx[i], &downy[i]);
            i++;
        }
    }
    double x, y;
    int point = 1;
    while(scanf("%lf %lf", &x, &y)==2)
    {
        if(x==9999.9 && y==9999.9)  break;
        bool flag = true;
        for(int j=0; j<i; j++)
        {
            if(x>upx[j] && y<upy[j]&& x<downx[j] && y>downy[j])
                { printf("Point %d is contained in figure %d\n", point, j+1); flag = false; }
        }
        if(flag)
           printf("Point %d is not contained in any figure\n", point);
        point++;
    }
    return 0;
}
