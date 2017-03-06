#include<stdio.h>
int main()
{
    long int x,y,r1,r2,carry,count;
    freopen("input10035.txt","r",stdin);
    freopen("output10035.txt","w",stdout);
    while(scanf("%lu %lu",&x,&y)==2 && x!=0 && y!=0)
    {
        carry=0;count=0;
       while(x!=0 && y!=0)
       {

            r1=x%10; r2=y%10;
            x=x/10 ; y=y/10;

            if(r1+r2+count>9)
            {
                carry++; count=1;
            }
            else{count=0;}
       }
       if(carry==0)
       {
           printf("No carry operation.\n");
       }
       else if(carry==1)
       {
           printf("1 carry operation.\n");
       }
       else
       {
           printf("%lu carry operations.\n",carry);
       }
    }
    return 0;
}
