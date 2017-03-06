#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
        char a[500];
        int i, sum , rem ,length;
        while(scanf("%s",a))
        {
           sum= 0; i=1;
           length = strlen(a);
           for(i=0;i<length;i++)
           {
               rem = a[i] - '0';
               sum = sum + rem * (pow(2,length-i)-1);
           }
           if(sum==0){break;}
            printf("%lld\n", sum);
        }
    return 0;
}


