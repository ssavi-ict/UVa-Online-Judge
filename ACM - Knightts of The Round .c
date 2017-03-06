#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, result, root, k;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a==0 || b==0 || c==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            k=(a+b+c)/2;
            root = sqrt(k*(k-a)*(k-b)*(k-c));
            result = root/k;
            printf("The radius of the round table is: %0.3lf\n",result);
        }
    }
    return 0;
}
