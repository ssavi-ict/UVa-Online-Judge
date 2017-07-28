#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        string input;
        getline(cin,input);
        int sz = input.size();
        long long int leftn = 0, leftd = 1, midn = 1, midd = 1, rightn = 1, rightd = 0;
        for(int i=0; i<sz; i++)
        {
            if(input[i]=='R')
            {
                leftn = midn; leftd = midd;
                midn = (midn + rightn); midd = (midd + rightd);
                rightn = rightn ; rightd = rightd;
            }
            else
            {
                rightn = midn ; rightd = midd;
                midn = (midn + leftn); midd = (midd + leftd);
                leftn = leftn; leftd = leftd;
            }
           // cout<<leftn<<'/'<<leftd<<' '<<midn<<'/'<<midd<<' '<<rightn<<'/'<<rightd<<endl;
        }
        cout<<midn<<'/'<<midd<<endl;
    }
    return 0;
}
