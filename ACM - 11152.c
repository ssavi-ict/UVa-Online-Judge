#include<stdio.h>
#include<math.h>
#define Pi acos(-1)
int main()
{
    double a, b, c;
    double k ,inner_radius, inner_area , sunflower, rose, violet,circle_area, triangle_area, inner_one, r;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a>0 && a<=b && b>0 && b<=c && c>0 && c<=1000)
        {
           k = 0.5*(a+b+c);

           inner_one = k*(k-a)*(k-b)*(k-c);
           inner_radius = sqrt(inner_one)/k;
           triangle_area = sqrt(inner_one);
           r = (a*b*c)/(4*triangle_area);
           circle_area = Pi*r*r;
           sunflower = circle_area - triangle_area;
           rose = Pi*inner_radius*inner_radius;
           violet = triangle_area-rose;
            printf("%.4lf %.4lf %.4lf\n",sunflower,violet,rose);
        }
    }
    return 0;
}
