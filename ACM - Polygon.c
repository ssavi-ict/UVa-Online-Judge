#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double result, pro, l;
    double r, n;
    while(scanf("%lf %lf",&r,&n)==2 && r>0 && n>2 && r<20000 && n<20000)
    {
        l=((360/n)*pi)/180;
        pro = sin(l);
        result = (r*r*n*pro)/2;
        printf("%0.3lf\n",result);
    }
    return 0;
}
