#include<stdio.h>
#include<string.h>
#include<math.h>
#define Pi 2*acos(0.0)
int main()
{
    int t ;
    double r,l, width, area, red, green;
    scanf("%d",&t);
    while(t--)
    {
        r=0;
        scanf("%lf",&l);
            r = l/5;
            width = (6*l)/10;
            area = width * l;
            red = Pi*r*r;
            green =  area - red;
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
