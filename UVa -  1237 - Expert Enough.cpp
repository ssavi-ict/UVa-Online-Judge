#include<bits/stdc++.h>

using namespace std;

long long int v1[10001];
long long int v2[10001];
char v[10001][25];

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {

        int d;
        string s;
        scanf("%d",&d);
        getchar();
        for(int i=0; i<d; i++)
        {
            scanf("%s %lld %lld", v[i], &v1[i], &v2[i]);
        }
        int q;
        long long int price, cnt, car;
        scanf("%d",&q);
        for(int i=0; i<q; i++)
        {
            scanf("%lld",&price);
            cnt = 0;
            for(int it=0; it<d; it++)
            {
                if(price>=v1[it] && price<=v2[it])
                {
                    cnt++;
                    car = it;
                }
            }
            if(cnt==1)
                printf("%s\n",v[car]);
            else
               puts("UNDETERMINED");
        }
        if(test)
            printf("\n");
    }
    return 0;
}
