#include<stdio.h>
int main()
{
    int n, k ,l, temp , count, t,i;
    //freopen("input10346.txt","r",stdin);
    //freopen("output10346.txt","w",stdout);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      scanf("%d %d %d",&n,&k, &l);
      if(n>=0 && n<1000 && k>=0 && k<1000 && l>1 && l<2000)
        {
            count=0;
            temp=n+k;
            while(temp>=l)
            {
                count++;
               temp=(temp-l)+1;

            }
            printf("%d\n",count);
        }
    }
    return 0;
}
