#include<stdio.h>
int main()
{
    int term1, term2, f, a,test1,test2,test3, t,i, sum, avg,total;
    //freopen("input11777.txt","r",stdin);
    //freopen("output11777.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d %d %d %d",&term1,&term2,&f,&a,&test1,&test2,&test3);
        if(test1>=test2 && test2>=test3)
            {sum=test1+test2;}
        else if(test1>=test2 && test3>=test2)
        {
            sum=test1+test3;
        }
        else if (test2>=test1 && test3>=test3)
           {sum=test2+test3;}
        avg=sum/2;
        total = term1 + term2 + f + a + avg;
        if(total>=90 && total<=100)
        {
            printf("Case %d: A\n",i);
        }
        else if(total<90 && total>=80)
        {
            printf("Case %d: B\n",i);
        }
        else if(total<80 && total>=70)
        {
            printf("Case %d: C\n",i);
        }
        else if(total<70 && total>=60)
        {
            printf("Case %d: D\n",i);
        }
        else if(total<60)
        {
            printf("Case %d: F\n",i);
        }
    }
    return 0;
}
