#include<stdio.h>
int main()
{
    long long int n, count, temp;
    while(scanf("%lld",&n)==1)
    {
     if(n==0)
            break;
        count=0;temp=n;
        if(temp>=101)
            temp=temp-10;
        else
            {
            while(count!=2)
            {
                if(temp>=101)
                    {
                        temp=temp-10;
                        count++;
                    }
                else
                    {
                        temp=temp+11;
                        count=0;
                    }
            }
        }
        printf("f91(%lld) = %lld\n",n,temp);
    }
    return 0;
}
