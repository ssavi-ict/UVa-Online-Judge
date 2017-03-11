#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a0, a1, a2, a3, a4, b0, b1, b2, b3, b4;
    while(scanf("%d %d %d %d %d %d %d %d %d %d", &a0, &a1, &a2, &a3, &a4, &b0, &b1, &b2, &b3, &b4)==10)
    {
        if((a0^b0) && (a1^b1) &&(a2^b2) && (a3^b3) && (a4^b4))
         printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
