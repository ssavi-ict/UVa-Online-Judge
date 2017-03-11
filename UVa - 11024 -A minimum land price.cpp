#include<bits/stdc++.h>

using namespace std;

long long int power(int m, int p)
{
    if (p==0) return 1;
    else return m*power(m,p-1);
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int x;
        vector<int>lp;
        lp.clear();
        while(scanf("%d",&x) && x!=0) lp.push_back(x);
        int sz = lp.size();
        sort(lp.begin(),lp.end(), greater<int>());
        long long int res = 0;
        for(int i=0; i<sz; i++)
        {
            res = res + 2*(power(lp[i],i+1));
        }
        if(res>5000000)
            printf("Too expensive\n");
        else
            printf("%lld\n",res);
    }
    return 0;
}
