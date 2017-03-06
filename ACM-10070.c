#include<stdio.h>
int main()
{
   long long int year ,p ,q , r ,s, z;
   //freopen("input10070.txt","r",stdin);
   //freopen("output10070.txt","w",stdout);

    while(scanf("%lld",&year)==1)
     {
        if(year>=2000)
            {
                p = year%400;
                q = year%100;
                r = year % 4;
                s = year % 55;
                z = year % 15;
                if(p==0 || q!=0 && r==0)
                {
                    printf("This is leap year.\n");
                        if(z==0)
                        {
                            printf("This is huluculu festival year.\n");
                        }
                      if( s==0)
                        {
                            printf("This is bulukulu festival year.\n");
                        }

                }
                else
                {
                    if(z==0)
                    {
                        printf("This is huluculu festival year.\n");
                    }
                    else
                    {
                        printf("This is an ordinary year.\n");
                    }
                }
                printf("\n");
            }
     }
    return 0;
}
