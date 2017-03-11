#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      char a[601];
      scanf("%s",a);
      int len = strlen(a);
      int count[6]={0};
      int pizza;
      for(int i=0; i<len; i++)
        {
            if(a[i]=='A')
                count[0]++;
            else if(a[i]=='R')
                count[1]++;
            else if(a[i]=='I')
                count[2]++;
            else if(a[i]=='G')
                count[3]++;
            else if(a[i]=='M')
                count[4]++;
            else if(a[i]=='T')
                count[5]++;
        }
        count[0]=count[0]/3;
        count[1]=count[1]/2;
      pizza = min(min(min(min(min(count[0],count[1]),count[2]),count[3]),count[4]),count[5]);
      printf("%d\n",pizza);
    }
    return 0;
}
