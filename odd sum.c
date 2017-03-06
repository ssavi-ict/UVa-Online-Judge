#include<stdio.h>
int main()
{
    int a,b,i,sum,t,l=1;
    scanf("%d",&t);
    while((t--)&&(t>=0 && t<=100))
    {
    int sum=0;
    scanf("%d%d",&a,&b);
    if(a>=0&&a<=b&&b<=100)
    {
     {
     for(i=a;i<=b;i++)
        {
            if((i%2)!=0)
               {
                   sum=sum+i;
               }
        }}

        printf("Case %d: %d\n",l,sum);
        l++;
        }
    }
    return 0;
}
