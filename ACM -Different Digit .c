#include<stdio.h>
int main()
{
    long long int a[5005], m,n,i,j,k,count,d;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        count=0; d=0;
        for(i=m;i<=n;i++)
        {
            j=0;k=i;
            while(k!=0)
            {
                j++;
                a[j]=k%10;
                k=k/10;
            }
            if(j==2)
                {
                    if(a[1]==a[2])
                       {count++;}
                }
            else if(j==3)
            {
                if((a[1]==a[2]) || (a[2]==a[3]) || (a[1]==a[3]))
                    {count++;}
            }
            else if(j==4)
            {
                if((a[1]==a[2]) || (a[1]==a[3]) ||(a[1]==a[4]) ||(a[2]==a[3]) || (a[2]==a[4]) || (a[3]==a[4]))
                   {count++;}
            }
            d++;
        }
        printf("%lld\n",d-count);
    }
    return 0;
}
