#include<stdio.h>
int main()
{
    int n,i,sum;
    freopen("perfect.txt","r",stdin);
    freopen("perfectans.txt","w",stdout);
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)!=EOF)
    {
    int sum=0;
    if(n==0 || n>60000)
        break;
    for(i=1; i<n; i++)
    {
        if((n%i)==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("%5d  PERFECT\n",n);
    if(sum<n)
        printf("%5d  DEFICIENT\n",n);
    if(sum>n)
        printf("%5d  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
