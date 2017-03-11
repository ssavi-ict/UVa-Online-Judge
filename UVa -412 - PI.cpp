#include<bits/stdc++.h>

template < class T > T gcd (T a, T b){ return (b!=0? gcd <T>(b,a%b): a); }
// template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        int arr[n+1];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        int pairs = (n*(n-1))/2;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(gcd(arr[i],arr[j])==1) cnt++;
            }
        }
        if(cnt==0)
            printf("No estimate for this data set.\n");
        else
        {
            double res = sqrt(((pairs*1.0)/(cnt*1.0))*6.0);
            printf("%0.6lf\n", res);
        }
    }
    return 0;
}
