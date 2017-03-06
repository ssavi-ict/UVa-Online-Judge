#include<stdio.h>
int main()
{
    long long int m, n, i, l, max, num, x,y,temp;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        if(m==0 || n==0)
            break;
        if(m>n)
           {
             temp=m;
             m=n;
             n=temp;
           }
        max=0;
        for(i=n;i>=m;i--)
        {
            x=i;
            l=acc(x);
            if(l>=max)
            {
                max=l;
                num=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",m,n,num,max);
    }
    return 0;
}
int acc(long long int x)
{
    long long int count=1;
    if(x%2==0)
        {x=x/2;}
    else
        {x=(3*x)+1;}

    while(x!=1)
    {
        if(x%2==0)
        {
            x = x/2;  count++;
        }
        else
        {
            x = 3*x + 1; count++;
        }

    }
    return (count);
}
