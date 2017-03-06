#include<stdio.h>
int main()
{
    long long int n,r,d,i=0,a;
    freopen("input2823.txt", "r", stdin);
    freopen("output2823.txt", "w", stdout);

    while(scanf("%lld %lld",&r,&n)== 2 && r!=0 && n!=0)
    {
        if(n>0 && r<10001 && n<r)
        {
            i=i+1;
            if(((26*n)+n)<r)
            {
                printf("Case %lld: impossible\n",i);
            }
            else
            {
                a=r/n;
                if((r%n)!=0)
                  {
                      d=a;
                  }
                  else
                  {
                      d=a-1;
                  }
                  if(d<27)
                    {printf("Case %lld: %lld\n",i,d);}
                  else
                  {break;}

            }
        }
    }
    return 0;
}
