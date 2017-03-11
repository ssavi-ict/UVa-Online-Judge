#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>myvector;
    map<int,int>mymap;
    int n;
    while(cin>>n)
    {
        if(mymap[n]==0) myvector.push_back(n);
        mymap[n]++;
    }
    for(int i=0; i<myvector.size(); i++)
    {
        cout<<myvector[i]<<' '<<mymap[myvector[i]]<<endl;
    }
    return 0;
}
