#include<bits/stdc++.h>
#define PI 2*acos(0.0)

using namespace std;

int main()
{
    double s, a;
    double dis, chord_dis;
    char str[5];
    while(scanf("%lf %lf %s",&s, &a, str)==3)
    {
        s = s + 6440;
        if(a>180)  a = 360 - a;
        if(!strcmp(str,"min"))  a = a/60;
        a = (PI*a)/180;
        dis = s * a;
        chord_dis = 2 * s * sin(a/2);
        printf("%0.6lf %0.6lf\n",dis,chord_dis);
    }
    return 0;
}
