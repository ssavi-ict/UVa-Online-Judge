#include<stdio.h>
int main()
{
    int n, temp;
    while(scanf("%d",&n)==1 && n>=1 && n<=200)
    {
       temp=n;
       while(n>=2)
       {
           temp = temp + n/3;
           n = (n/3) + (n%3);
           if(n==2)
           {
               temp++;
               break;
           }
       }
       printf("%d\n",temp);
    }
    return 0;
}
