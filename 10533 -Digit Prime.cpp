#include<bits/stdc++.h>
#define MAX 1000001

using namespace std;

int b[MAX];

int digsum(int x)
{
    int sum = 0;
    while(x!=0)
    {
        sum = sum + x%10;
        x = x/10;
    }
    return sum;
}

int main()
{

    for(int i=1;i<=MAX;i++)   b[i]=i;
    b[1]=0;
    int sq = sqrt(MAX);
    for(int i=2;i<=sq;i++)
    {
      if(b[i]!=0)
      {
        for(int k=2*i;k<=MAX;k=k+i)
        if(b[k]!=0)
            b[k]=0;
      }
    }
    int t;
    scanf("%d",&t);
        while(t--)
        {
            int q1, q2, count=0;
            scanf("%d %d",&q1, &q2);
            for(int i=q1; i<=q2; i++)
            {
                if(i%2!=0 && b[i]!=0 && b[digsum(i)]!=0)  count++;
            }
            printf("%d\n",count);
        }
    return 0;
}

