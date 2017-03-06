#include<stdio.h>
int main()
{
    long long int a[10000], r, i,t,n,j,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    scanf("%lld",&t);
    while(t-- && t<=20)
    {
        c0=0;c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
        scanf("%lld",&n);
        if(n>0)
        {
            for(i=1;i<=n;i++)
             {
                 a[i]=i;
             }
            for(j=1;j<=n;j++)
            {
                while(a[j]!=0)
                {
                r = a[j]%10;
                if(r==0)
                    c0++;
                if(r==1)
                    c1++;
                if(r==2)
                    c2++;
                if(r==3)
                    c3++;
                if(r==4)
                    c4++;
                if(r==5)
                    c5++;
                if(r==6)
                    c6++;
                if(r==7)
                    c7++;
                if(r==8)
                    c8++;
                if(r==9)
                    c9++;
                a[j]=a[j]/10;
                }
            }
            printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
        }

    }
    return 0;
}
