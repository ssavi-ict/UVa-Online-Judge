#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int N, B, K;
        scanf("%d %d",&N, &B);
        int tot = 0;
        for(int i=0; i<B; i++)
        {
            scanf("%d",&K);
            int mod = 1, x;
            for(int j=0; j<K; j++)
            {
                scanf("%d",&x);
                mod = (mod*x)%N;
            }
            tot = tot + mod;
        }
        printf("%d\n",tot%N);
    }
    return 0;
}
