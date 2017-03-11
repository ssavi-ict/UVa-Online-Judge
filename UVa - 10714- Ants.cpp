#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, test, s, l;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&m, &n);
        int d;
        s = 0;
        l = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&d);
            l = max(l, max(m-d,d));
            s = max(s, min(m-d,d));
        }
        printf("%d %d\n", s, l);
    }
    return 0;
}
