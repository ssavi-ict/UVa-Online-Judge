#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int k;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld", &k);
        if(k<0) k = k * (-1);
        long long int n = (-1 + sqrt(-1 + (8*k)))/2;
        if(k==0) printf("3\n");
        else if((n*(n+1)/2)==k)
            printf("%lld\n", n);
        else
        {
            n++;
            while(((n*(n+1)/2)-k)%2!=0)
            {
                n++;
            }
            printf("%lld\n", n);
        }

        if(test) printf("\n");
    }
    return 0;
}
