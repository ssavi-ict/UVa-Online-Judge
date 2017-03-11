#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        long long int x;
        while(scanf("%lld %d",&x, &n)==2)
        {
            if(x<=(pow(2,n+1)-1))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;

        }
    return 0;
}
