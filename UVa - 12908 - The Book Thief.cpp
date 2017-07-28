#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    while(scanf("%d",&s) && s)
    {
        long long int res = 2*(1+s);
        double found = sqrt(4+(4*1*res)) - 2;
        long long int n = ceil((found)/2);
        long long int sum = n*(n+1)/2;
        if(sum<=s)
        {
            n++;
            sum = n*(n+1)/2;
            long long int x = sum - s;
            printf("%lld %lld\n", x, n);
        }
        else
        {
            long long int x = sum - s;
            printf("%lld %lld\n", x, n);
        }
    }
    return 0;
}
