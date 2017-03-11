#include<bits/stdc++.h>

using namespace std;

int main()
{
    double H, U, D, F;
    while(scanf("%lf %lf %lf %lf", &H, &U, &D, &F)==4 && H!=0.0)
    {
        double ff = U*(F/100);
        double ih = 0.0;
        int day=0;
        while(1)
        {
            day++;
            if(U>0) ih = ih + U;
            U = U - ff;
            if(ih>H)
                break;
            ih = ih - D;
            if(ih<0)
                break;
        }
        if(ih>=0)
            printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);
    }
    return 0;
}
