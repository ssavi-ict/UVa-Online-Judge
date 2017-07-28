#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c, d, e;
    int first, second;
    while(cin>>first>>second)
    {
        if(first==0 && second==0)  break;
        if(second==0){ printf("1\n"); continue; }
        if(second==1){ printf("%d\n",first); continue; }
        a=""; b="";
        char one, two;
        if(first==10) {one = first/10+'0'; two=first%10+'0'; a = a+one+two;}
        else { one = first%10+'0';  a = a + one; }
        b = a;
        if(first<10)
        {
            for(int power=0; power<second-1; power++)
            {
                if(a.size()<b.size()) swap(a,b);
                int sza = a.size();
                int szb = b.size();
                c = "";
                int bm = b[szb-1]-48;
                int carry=0;
                //First Character Multiplication Start
                for(int i = sza-1; i>=0; i--)
                {
                    int mul = (a[i]-48)*bm + carry;
                    if(mul>9)
                        carry = mul/10;
                    else
                        carry = 0;
                    char add = (mul%10) + 48;
                    c = c + add;
                }
                if(carry>0)
                {
                    char dd = carry + 48;
                    c = c + dd;
                    carry=0;
                }
                reverse(c.begin(),c.end());
                a = c;
                //cout<<"f="<<c<<endl;
             }
                bool flag = false;
                int zeros=0;
                for(int i=0; i<c.size(); i++)
                {
                    if(c[i]=='0')
                        zeros++;
                }
                if(zeros==c.size()) cout<<'0';
                else
                {
                    for(int i=0; i<c.size(); i++)
                    {
                        if(c[i]=='0' && !flag)
                            continue;
                        cout<<c[i];
                        flag = true;
                    }
                }
        }
        else
        {
            printf("1");
            for(int i=0; i<second; i++)
                printf("0");
        }
        cout<<endl;
    }
    return 0;
}

