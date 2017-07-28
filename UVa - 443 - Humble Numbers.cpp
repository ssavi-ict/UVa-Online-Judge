#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<long long int>humble;
    set<long long int>::iterator it;
    humble.insert(1);
    for(it=humble.begin(); humble.size()<7800 ; ++it)
    {
        humble.insert(*it * 2);
        humble.insert(*it * 3);
        humble.insert(*it * 5);
        humble.insert(*it * 7);
    }
    vector<long long int>myvector(humble.begin(),humble.end());
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        int suffix = n%10;
        int suffix2 = n%100;
        if(suffix2==11 || suffix2==12 || suffix2==13)
        {
            cout<<"The "<<n<<"th humble number is "<<myvector[n-1]<<"."<<endl;
        }
        else
        {
            if(suffix==1)
                cout<<"The "<<n<<"st humble number is "<<myvector[n-1]<<"."<<endl;
            else if(suffix==2)
                cout<<"The "<<n<<"nd humble number is "<<myvector[n-1]<<"."<<endl;
            else if(suffix==3)
                cout<<"The "<<n<<"rd humble number is "<<myvector[n-1]<<"."<<endl;
            else
                cout<<"The "<<n<<"th humble number is "<<myvector[n-1]<<"."<<endl;
        }
    }
    return 0;
}
