#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double x1, y1, x2, y2, x, y;
    while(cin>>n>>x1>>y1>>x2>>y2)
    {
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            double gopher = ((x1-x)*(x1-x)) + ((y1-y)*(y1-y));
            double dog = ((x2-x)*(x2-x)) + ((y2-y)*(y2-y));
            if((gopher*4.00)<=dog && !flag)
            {
                flag = true;
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",x,y);
            }
        }
        if(!flag)
            printf("The gopher cannot escape.\n");

    }
    return 0;
}
