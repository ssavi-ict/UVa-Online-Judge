#include<bits/stdc++.h>

using namespace std;

vector<string>v;

void precalculation()
{
    string a, b, c;
    v.push_back("0");
    v.push_back("1");
    v.push_back("1");
    for(int i=3; i<=5000; i++)
    {
        a = v[i-2]; b = v[i-1];
        int sza = a.size();
        int szb = b.size();
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
        reverse(c.begin(),c.end());
        //a=c;
        v.push_back(c);
        //cout<<c<<endl;
        c="";

    }
}

int main()
{
    precalculation();
    int n;
    while(scanf("%d",&n)==1)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<v[n]<<endl;
    }
}

