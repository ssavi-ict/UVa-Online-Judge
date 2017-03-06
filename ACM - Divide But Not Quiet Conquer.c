#include<stdio.h>
long long int a[500000];
int main()
{
   long long int m, n, i, j, flag, c, b, l, d ,e;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        flag=0; i=1; l=0;
        c=m; b=n;
        if((m<n || m<2 || n<2))
            {printf("Boring!\n");}
        else
        {
            while(c>1)
            {
               c=c/b;
               l++;
            }
            while(m>1)
            {
                if(m%n==0)
                {
                    a[i]=m;
                    i++;
                    m=m/n;
                    a[i]=m;
                    flag++;
                }
                else
                    break;
            }
            if(flag==l)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%lld",a[j]);
                    if(j<i)
                        printf(" ");
                }
             }
            else
              printf("Boring!");
            printf("\n");
        }
    }
    return 0;
}
