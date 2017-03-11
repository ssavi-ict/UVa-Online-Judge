#include<bits/stdc++.h>
#define n 10000

int b[10002];
int primenumber[1300];

void prime()
{
    int i,j,k,l;
    for(i=1;i<=n;i++) {b[i]=1;}
    b[1]=0; l=0;
    for(i=2;i<=sqrt(n);i++)
    {
      if(b[i]!=0)
      {
        for(k=2*i;k<=n;k=k+i)
        if(b[k]!=0)
            b[k]=0;
      }
    }

    for(int i=0; i<n; i++)
    {
        if(b[i]!=0)
            primenumber[l++]=i;
    }
}
int main()
{
  prime();
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int m, tot=1228;
      scanf("%d",&m);
      for(int i=0; i<1229; i++)
      {
           int x = m/2 + 1;
           if(primenumber[i]>=x)
           {
               printf("%d\n",primenumber[i]);
               break;
           }
      }
  }
  return 0;
}
