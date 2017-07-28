#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        sort(s.begin(),s.end());
        long long int bignum=0, smallnum=0;
        for(int j=s.size()-1;j>=0; j--)
        {
            bignum = bignum*10 + (s[j]-'0');
        }
        int loc;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='0')
            {
                char ch = s[i];
                loc = i;
                smallnum = smallnum*10+(ch-'0');
                for(int l=0; l<s.size(); l++)
                {
                    if(l!=loc)
                        smallnum = smallnum*10 + (s[l]-'0');
                }
                break;
            }
        }
        cout<<bignum<<" - "<<smallnum<<" = "<<bignum-smallnum<<" = "<<"9 * "<<(bignum-smallnum)/9<<endl;
    }
    return 0;
}
