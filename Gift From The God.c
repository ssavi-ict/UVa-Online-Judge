#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 1000000

int prim[1000005];

int pali(int x)
{
    int num = x, sum=0;
    while(num!=0)
    {
        sum = sum*10 + num%10;
        num = num/10;
    }
    int dec = (sum==x)?1:0;
    return dec;
}


int main()
{
    int n;
    int i, j, l;
    for(i=1; i<=N; i++)
        prim[i] = i;
    prim[1] = 1;
    for(i=2; i<=sqrt(N); i++)
    {
        if(prim[i]!=0)
        {
            for(j=2*i; j<=N; j=j+i)
            {
                if(prim[j]!=0)
                    prim[j]=0;
            }
        }
    }
    while(scanf("%lld",&n)==1)
    {
        printf("%d\n",n*2);
        if(pali(n)==1 && prim[n]!=0)
           break;
    }
    return 0;
}
