#include<stdio.h>
int main()
{
    long long int a, b, c, d, l, i, count,val;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        count=0;
        for(i=0;i<=l;i++)
        {
            val = (a*(i*i)) + (b*i) + c;
            if((val%d)==0)
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
