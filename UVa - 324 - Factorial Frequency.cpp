#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a[3000];
    int n,i,j,temp,m,x;
    while(scanf("%d",&n)==1 && n)
    {
       int b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0,p=0,k=0;
       a[0]=1;
       m=1;
       temp = 0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp;
               a[j]=x%10;
               temp = x/10;
            }
             while(temp>0)
             {
               a[m]=temp%10;
               temp = temp/10;
               m++;
             }
      }
      for(i=m-1;i>=0;i--)
      {
          //printf("%d",a[i]);
          if(a[i]==0) b++; if(a[i]==1) c++;
          if(a[i]==2) d++; if(a[i]==3) e++;
          if(a[i]==4) f++; if(a[i]==5) g++;
          if(a[i]==6) h++; if(a[i]==7) l++;
          if(a[i]==8) p++; if(a[i]==9) k++;
      }
      printf("%d! --\n",n);
      printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n", b, c, d, e, f);
      printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n", g, h, l, p, k);
    }
    return 0;
}

