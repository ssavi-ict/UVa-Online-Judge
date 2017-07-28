#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d", &n, &h);
        string res = "";
        for(int i=n-1; i>=0; i--)
        {
            res = res + (h<=0?'0':'1');
            h--;
        }
        sort(res.begin(), res.end());
        do{
            cout<<res<<endl;
        }while( next_permutation(res.begin(),res.end()) );
        if(test)
            cout<<endl;
    }
    return 0;
}
