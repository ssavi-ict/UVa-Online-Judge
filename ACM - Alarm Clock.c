#include<stdio.h>
int main()
{
    int h1, m1, h2, m2, pro, mul, time;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {break;}
        if(h1==0 || h2==0)
        {
            pro = (24*60)+m1;
            mul = (24*60)+m2;
        }
        pro = (h1*60)+m1;
        mul = (h2*60)+m2;
        if(pro>mul)
            {time = 1440 + (mul-pro);}
        else
            {time = mul-pro;}
        printf("%d\n",time);
    }
    return 0;
}
