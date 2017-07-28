#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x;
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        scanf("%d %d %d", &n, &k, &x);
        long long int nsum = (n*(n+1))/2;
        long long int ksum = ((x+k-1) * (x+k))/2;
        x--;
        long long int xsum = (x*(x+1))/2;
        //cout<<nsum<< ' '<<ksum<<' '<<xsum<<endl;
        printf("Case %d: %lld\n",caseno, nsum-(ksum-xsum));
    }
    return 0;
}
