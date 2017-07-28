#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c, d;
    getline(cin,a);
    c = "";
    while(getline(cin,b) && b[0]!='0')
    {
        int sza = a.size();
        int szb = b.size();
        if(sza<szb)
        {
            int j = sza-1;
            int add;
            char num;
            int carry = 0;
            int jn = a[j]-48;
            for(int i = szb-1; i>=0; i--)
            {
                add = (b[i]-48) + jn + carry;
                j--;
                if(add>9)
                    carry = add/10;
                else
                    carry = 0;
                num = (add%10) + 48;
                c = c + num;
                if(j<0)
                    jn = 0;
                else
                    jn = a[j]-48;
            }
            if(carry>0)
            {
                num = carry + 48;
                c = c + num;
            }
        }
        else
        {
            int j = szb-1;
            int add;
            char num;
            int carry = 0;
            int jn = b[j]-48;
            for(int i = sza-1; i>=0; i--)
            {
                add = (a[i]-48) + jn + carry;
                j--;
                if(add>9)
                    carry = add/10;
                else
                    carry = 0;
                num = (add%10) + 48;
                c = c + num;
                if(j<0)
                    jn = 0;
                else
                    jn = b[j]-48;
            }
            if(carry>0)
            {
                num = carry + 48;
                c = c + num;
            }
        }
        reverse(c.begin(),c.end());
        a=c;
        //cout<<a<<endl<<c<<endl;
        c="";
    }
    cout<<a<<endl;
    return 0;
}
