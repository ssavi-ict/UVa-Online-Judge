/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a[40000];
    int n,i,j,temp,m,x;
    while(scanf("%d",&n)==1)
    {
       if(n==0)
          { printf("%5d -> 1\n",n); continue; }
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
               if(i==n && a[j]!=0)
                   { printf("%5d -> %d\n",n,a[j]);  break; }

            }
             while(temp>0)
             {
               a[m]=temp%10;
               temp = temp/10;
               m++;
             }
      }
    }
    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[10002];
    arr[0]=arr[1]='1';
    int fact = 1;
    for(int i=2; i<10001; i++)
    {
        fact = fact * i;
        while(fact%10==0)
        {
            fact = fact / 10;
        }
        fact = fact%100000;
        arr[i]=fact%10+'0';
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%5d -> %c\n",n,arr[n]);
    }
    return 0;
}
