#include<stdio.h>
int main()
{
    int i, test, avg, result, t1, t2, final, attendance, a, b,c;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
    scanf("%d %d %d %d %d %d %d",&t1,&t2,&final,&attendance,&a,&b,&c);
    if(c<=a && c<=b)
    {
        avg=(a+b)/2;
    }
    else if(a<=b && a<=c)
    {
        avg=(b+c)/2;
    }
    else
    {
        avg=(a+c)/2;
    }
    result=t1+t2+final+attendance+avg;
    if(result>=90)
        printf("Case %d: A\n",i);
    else if(result<90 && result>=80)
        printf("Case %d: B\n",i);
    else if(result<80 && result>=70)
        printf("Case %d: C\n",i);
    else if(result<70 && result>=60)
        printf("Case %d: D\n",i);
        else
        printf("Case %d: F\n",i);

    }
    return 0;
}
