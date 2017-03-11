#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;int arr[150];
    for(int i=1; i<=150; i++)
        arr[i]=i;
    while(scanf("%d",&n) && n!=0)
    {

       int half;
       if(n<2)
         half = ceil((double)n/2);
       else if(n%4==0)
       {
           half = n/2;
       }
       else
       {
           if((n+1)%4==0)  half = (n+1)/2;
           else if((n+2)%4==0)  half = (n+2)/2;
           else if((n+3)%4==0)  half = (n+3)/2;
       }
       printf("Printing order for %d pages:\n",n);
       int c = 1;
       for(int i=1, j=half*2; i<=half, j>half; i++, j--)
       {
           if(i%2!=0)
           {
               printf("Sheet %d, front: ",c);
               (j>n)?printf("Blank, "):printf("%d, ",j);
               (i>half)?printf("Blank\n"):printf("%d\n",i);
           }
           else
           {
                printf("Sheet %d, back : ",c++);
                (i>half)?printf("Blank, "):printf("%d, ",i);
                (j>n)?printf("Blank\n"):printf("%d\n",j);
           }
       }
    }
    return 0;
}
