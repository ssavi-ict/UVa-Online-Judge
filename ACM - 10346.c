#include<stdio.h>
int main()
{
    int n, k , temp , count;
    //freopen("input10346.txt","r",stdin);
    //freopen("output10346.txt","w",stdout);
    while(scanf("%d %d",&n,&k)==2 && k>1)
    {
        count=0;
        temp=n;
        while(n>=k)
        {
            count++;
           n=(n-k)+1;

        }
        printf("%d\n",temp+count);
    }
    return 0;
}
