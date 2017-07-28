#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &e))
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0) break;
        if(e>1)
            e = e*e;
        if(d>1)
            d = d * d;
        printf("%d\n",a*b*c*d*e);
    }
    return 0;
}
