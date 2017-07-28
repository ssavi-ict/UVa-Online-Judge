#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, caseno = 0;
    while(scanf("%d",&n)==1)
    {
        int found=999, x, maxpos, maxneg;
        long long int  res = 1;
        vector<long long int>v;
        for(int i=0;i<n; i++)
        {
            scanf("%d",&x);
            if(i==0)
            {
                maxpos = x;
                maxneg = -99999999999;
            }
            else
            {
                maxpos = maxpos * x;
            }
        }
        if(res<0 && n>1)
           res = res / found;
        else if(res<0 && n<=1)
            res = 0;
        printf("Case #%d: The maximum product is %lld.\n\n", ++caseno, res);
    }
    return 0;
}
