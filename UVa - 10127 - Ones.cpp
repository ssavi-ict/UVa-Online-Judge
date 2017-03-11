#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int cnt = 1;
        int mod = 1%n;
        while(mod!=0)
        {
            mod = ((mod*10)%n + (1%n))%n;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
