#include<stdio.h>
#include<math.h>
int main()
{
    double  result, hour, mins;
    int rem, h, m;
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==00)
            break;
        rem=(h%12)*30;
        mins = m*(5.5);
        hour= (rem-mins);
        if(hour<0)
            hour=hour*(-1);
        if(hour>180)
            result = 360-hour;
        else
            result=hour;
        printf("%0.3lf\n",result);
    }
    return 0;
}
