#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,income;
    int x;
    while(scanf("%lld %d",&m, &x)==2)
    {
        if(m==0 && x==0) break;
        if(x==100)
            printf("Not found\n");
        else
        {
            income = (m-1)*100/(100-x);
            if((m-1)*100%(100-x)==0)
                income = income - 1;
            if(income<m)
                printf("Not found\n");
            else
               printf("%lld\n",income);
        }
    }
    return 0;
}
