#include<bits/stdc++.h>

using namespace std;

int res[100000]={0};
int main()
{
    for(int i=1; i<=100000; i++)
    {
        int num = i + (i/10000) + (i/1000)%10 + (i/100)%10 + (i/10)%10 + i%10;
        if(res[num]==0 || i<res[num])
            res[num] = i;
    }
    int n, m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        cout<<res[m]<<endl;
    }
    return 0;
}
