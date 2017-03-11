#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n)==2)
    {
        printf("[");
        printf("%d;",m/n);
        int mod = m%n;
        while(mod!=0)
        {
            printf("%d",n/mod);
            swap(mod,n);
            mod = mod%n;
            if(mod>0)
                printf(",");
        }
        printf("]\n");
    }
    return 0;
}
