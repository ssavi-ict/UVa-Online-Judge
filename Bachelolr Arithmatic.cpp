#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int s, b, j=0;
    while(cin>>b>>s && b!=0 && s!=0)
    {
        cout<<"Case "<<++j;
        if(b==0 || b==1)
            cout<<": :-\\"<<endl;
        else if(b<=s)
            cout<<": :-|"<<endl;
        else if(b>s)
            cout<<": :-("<<endl;

    }
    return 0;
}

