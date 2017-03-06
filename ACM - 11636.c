#include<stdio.h>
int main()
{
    int n,count, i=0;
    while(scanf("%d",&n)==1)
    {
        count=0;i++;
        while(n!=1)
        {
            if((n%2)!=0)
            {
                n=(n/2)+1;
                count++;
            }
            else
            {
                n=n/2;
                count++;
            }
        }
        printf("Case %d: %d\n",i,count);

    }
    return 0;
}
