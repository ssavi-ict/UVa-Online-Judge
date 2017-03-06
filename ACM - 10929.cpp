#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[1002];
    int i, mod, vag, j, l;
    while(1)
    {
        cin>>a;
        mod = 0;
        for(i=0; a[i]!='\0'; i++)
        {
            vag = mod*10+(a[i]-48);
            mod = vag%11;
        }
        if(a[0]=='0' && strlen(a)==1)
            break;
        else if(mod==0)
            cout<<a<<" is a multiple of 11."<<endl;
        else
            cout<<a<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
