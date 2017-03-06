#include<stdio.h>
int main()
{
    int n, sum, dig, t, temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        temp=n;
        while(temp!=1)
        {
            sum=0;
            if(temp<10)
            {
                temp=temp*temp;
            }
            while(temp!=0)
            {
                dig = temp%10;
                sum = sum + dig*dig;
                temp = temp/10;
            }
            temp = sum;
        }
        if(sum==1)
        {
            printf("%d is a happy number\n",n);
        }
        else
        {
            printf("%d is a unhappy number\n",n);
        }
    }
    return 0;
}
