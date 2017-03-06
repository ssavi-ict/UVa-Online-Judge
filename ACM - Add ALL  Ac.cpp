#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
long long int a[2000005];
int main()
{
    long long int n, i, j, k, add, cost, m, l;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cost=0; m=n;k=1;
        while(k<m)
        {
            k++;
            sort(a,a+n);
            for(j=0;j<n;j++)
            {
                if(j==0)
                   {
                       a[j]=a[j]+a[j+1];
                       cost=cost+a[j];
                       n--;
                   }
                else
                   {
                       a[j]=a[j+1];
                }
            }
        }
       cout<<cost<<endl;
    }
    return 0;
}
