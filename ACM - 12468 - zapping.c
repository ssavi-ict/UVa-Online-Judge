#include<stdio.h>
int main()
{
    int a, b, zap;
    while(scanf("%d%d",&a,&b)==2 && a>=0 && b>=0 && a<=99 && b<=99)
    {
        if((a==99 && b==0) || (a==0 && b==99))
        {
            zap = 1;
        }
        else if (a==b)
        {
            zap = 0;
        }
        else
        {
            zap = abs (a-b);
            if(zap>=50)
            {
                zap = 100 - zap;
            }
        }
        printf("%d\n",zap);
    }
    return 0;
}
