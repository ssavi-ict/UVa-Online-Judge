#include<bits/stdc++.h>

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }

using namespace std;

int main()
{
    int test, caseno=0;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        long long int dot = 1, sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            dot = dot * a[i];
        }
        for(int i=0; i<n; i++)
            sum = sum + (dot/a[i]);
        dot = n * dot;
        long long int res1 = dot/(gcd<long long int>(dot,sum));
        long long int res2 = sum/(gcd<long long int>(dot,sum));
        printf("Case %d: %lld/%lld\n",++caseno, res1, res2);
    }
    return 0;
}
