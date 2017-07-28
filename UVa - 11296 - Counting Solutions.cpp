#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        ll i = (n/2) + 1;
        printf("%lld\n", i*(i+1)/2);
    }
    return 0;
}
