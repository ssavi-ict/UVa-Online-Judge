#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r1, c1, r2, c2;
    while(scanf("%d %d %d %d", &r1, &c1, &r2, &c2)==4 &&r1&&r2&&c1&&c2)
    {
        if(r1==r2 && c1==c2) puts("0");
        else if((abs(r1-r2)==abs(c1-c2)) || (r1==r2) || (c1==c2)) puts("1");
        else puts("2");
    }
    return 0;
}


