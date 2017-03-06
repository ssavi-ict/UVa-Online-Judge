#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    int i, sum, prime, val,j;
    while(scanf("%s",a)==1)
    {
        sum=0;prime=1;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>64 && a[i]<91)
            {
                val=a[i]-38;
            }
            if(a[i]>96 && a[i]<123)
            {
                val=a[i]-96;
            }
            sum=sum+val;
        }
        for(j=2;j<sum;j++)
        {
            if((sum%j)==0)
            {
                prime=0;
            }
        }
        if(prime==0)
            printf("It is not a prime word.\n");
        if(prime==1)
            printf("It is a prime word.\n");
    }
    return 0;
}
