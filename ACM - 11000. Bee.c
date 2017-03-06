#include<stdio.h>
int main()
{
    int n,first,second,next[10000],c,i,j,sum,male;
    while(scanf("%d",&n)==1 && n>=0)
    {
      sum=0;first=0;second=1;
        for(c=1;c<=n+1;c++)
        {
            if(c<=1)
                next[c]=c;
                else
                {
                next[c]=first+second;
                  first=second;
                  second=next[c];
                }
        }
        for(i=1;i<=n+1;i++)
            {
               sum=sum+next[i];
               male = sum-next[i];
            }


        printf("%d %d\n",male,sum);
    }
    return 0;
}

