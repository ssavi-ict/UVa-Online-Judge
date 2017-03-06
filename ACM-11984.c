#include<stdio.h>
int main()
{
    int i,t;
    double result, sum, point, c, f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0; result=0;
        scanf("%lf %lf",&c,&f);
        if(c>=0 && f<=100)
        {
            point = (((9*c)/5) + 32);
            sum = f+point;
            result = ((sum-32)*5)/9;
        }
        printf("Case %d: %.2lf\n",i,result);
    }
    return 0;
}
