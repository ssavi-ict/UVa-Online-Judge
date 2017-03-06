#include<stdio.h>
int main()
{
    int n ,sum, result, temp2, rem2, rem, rest,temp ;
    //freopen("input11332.txt","r",stdin);
    //freopen("output11332.txt","w",stdout);

    scanf("%d",&n);
    while(n!=0)
    {
        temp=n;sum=0;

        if(temp>0 && temp<=2000000000)
        {

                while(temp!=0)
                {
                    rem=temp%10;
                    sum=sum+rem;
                    temp=temp/10;
                }
                if (sum>=1 && sum<=9)
                {
                    result = sum;
                }
                else
                {
                    temp2=sum; result=0;
                    while(temp2!=0)
                    {
                        rem2=temp2%10;
                        result=result+rem2;
                        temp2 = temp2/10;
                    }
                }

        }
        printf("%d\n",result);
        break;
    }
    return 0;
}
