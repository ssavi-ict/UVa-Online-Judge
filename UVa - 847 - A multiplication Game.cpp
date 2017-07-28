#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main()
{
    LL n;
    while(scanf("%lld",&n)==1)
    {
        bool flag;
        if(n<=9) flag = true;
        else if(n<=9*2) flag = false;
        else if(n<=9*2*9) flag = true;
        else if(n<=9*2*9*2) flag = false;
        else if(n<=9*2*9*2*9) flag = true;
        else if(n<=9*2*9*2*9*2) flag = false;
        else if(n<=9*2*9*2*9*2*9) flag = true;
        else if(n<=9*2*9*2*9*2*9*2) flag = false;
        else if(n<=9*2*9*2*9*2*9*2*9) flag = true;
        else if(n<=9*2*9*2*9*2*9*2*9*2) flag = false;
        else if(n<=9*2*9*2*9*2*9*2*9*2*9) flag = true;
        else if(n<=9*2*9*2*9*2*9*2*9*2*9*2) flag = false;
        else if(n<=9*2*9*2*9*2*9*2*9*2*9*2*9) flag = true;
        else if(n<=9*2*9*2*9*2*9*2*9*2*9*2*9*2) flag = false;

        if(flag) printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
