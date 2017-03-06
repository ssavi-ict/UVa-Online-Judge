#include<stdio.h>
#include<math.h>
int main()
{
    double m1, m2, m3, area, t ,med;
    while(scanf("%lf %lf %lf",&m1, &m2, &m3)==3)
    {
        med = ( m1+m2+m3 )/2;
        area = (4.0/3.0)*(sqrt( med*(med-m1)*(med-m2)*(med-m3)));
        if(area>0)
        {
            printf("%0.3lf\n",area);
        }
        else
        {
            area=-1;
            printf("%0.3lf\n",area);
        }
    }
    return 0;
}
