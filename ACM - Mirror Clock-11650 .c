#include<stdio.h>
int main()
{
    int a, b, mul, sub,t, hh, mm;
    scanf("%d",&t);
    while(t-- && t<1000)
    {
        scanf("%d:%d",&a,&b);
        mul = (a*60)+b;
        sub = 1440-mul;
        hh = sub/60;
        mm = sub%60;
        if(hh>12)
        {
            printf("%02d:%02d\n",hh-12,mm);
        }
        if(hh==12 && mm==0)
        {
            printf("12:00\n");
        }
        if(hh<=12 && mm!=0)
        {
            printf("%02d:%02d\n",hh,mm);
        }
    }
    return 0;
}
