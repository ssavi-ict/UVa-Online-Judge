
#include<stdio.h>
long long int a[2000005],n,i,k,ptr,temp;
int main()
{

    while(scanf("%lld",&n)==1)
    {
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        for(k=1;k<=n;k++)
        {
            for(ptr=1;ptr<=n-k;ptr++)
            {
                if(a[ptr]>a[ptr+1])
                {
                    temp=a[ptr+1];
                    a[ptr+1]=a[ptr];
                    a[ptr] = temp;
                }
            }
        }
        for(i=1;i<=n;i++)
            {
                printf("%lld",a[i]);
                if(i<n)
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}
