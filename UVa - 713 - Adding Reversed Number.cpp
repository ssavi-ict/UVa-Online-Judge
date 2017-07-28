#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        string a, b, c;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int sza = a.size();
        int szb = b.size();
        if(sza<szb) { swap(a,b); swap(sza,szb); }
        int carry=0;
        for(int i=sza-1, j=szb-1; i>=0; i--, j--)
        {
            int anow = a[i]-'0', bnow;
            if(j<0) {bnow = 0;}
            else bnow = b[j]-'0' ;
            int add = anow + bnow + carry;
            char ch = add%10 + '0';
            c = c + ch;
            carry = add/10;
        }
        while(carry!=0)
        {
            char cadd = carry%10 + '0';
            carry = carry/10;
            c = c + cadd;
        }
        int szc = c.size();
        bool flag = false;
        for(int i=0; i<szc; i++)
        {
            if(c[i]=='0' && !flag) continue;
            printf("%c",c[i]);
            flag = true;
        }
        cout<<endl;
    }
    return 0;
}
