
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, c, d, e;
    string input;
    int secinput;
    while(cin>>input)
    {
        cin>>secinput;
        a="";
        int point=0;
        int pointplace;
        for(int i=0; i<input.size(); i++)
        {
            if(isdigit(input[i]))
                a = a + input[i];
            if(input[i]=='.') pointplace=i+1;
            point++;
        }
        point = point - pointplace;
        point = point*secinput;
        b = a;
        for(int loop=0; loop<secinput-1; loop++)
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
            d="";
            //First Character Multiplication End
            //Total String Multiplication End
            int zero = 1;
            for(int j=szb-2; j>=0; j--)
            {
                int bm = b[j]-48;
                int carry=0;
                for(int i = sza-1; i>=0; i--)
                {
                    int mul = (a[i]-48)*bm + carry;
                    if(mul>9)
                        carry = mul/10;
                    else
                        carry = 0;
                    char add = (mul%10) + 48;
                    d = d + add;
                }
                if(carry>0)
                {
                    char dd = carry + 48;
                    d = d + dd;
                    carry=0;
                }
                reverse(d.begin(),d.end());
                for(int z=0; z<zero; z++)
                {
                    d = d+'0';
                }

                //Multiplication End
                //Adition Start
                if(c.size()<d.size()) swap(c,d);
                int szc = c.size();
                int szd = d.size();
                int l = szd-1, adds;
                char num;
                int cadd = 0, jn = d[l]-48;
                e="";
                for(int i = szc-1; i>=0; i--)
                {
                    adds = (c[i]-48) + jn + cadd;
                    l--;
                    if(adds>9)
                        cadd = adds/10;
                    else
                        cadd = 0;
                    num = (adds%10) + 48;
                    e = e + num;
                    if(l<0)
                        jn = 0;
                    else
                        jn = d[l]-48;
                }
                if(cadd>0)
                {
                    num = cadd + 48;
                    e = e + num;
                }
                reverse(e.begin(),e.end());
                c=e;
                d="";
                zero++;
            }

            a=c;
        }

            int zeros=0;
            for(int i=0; i<c.size(); i++)
            {
                if(c[i]=='0')
                    zeros++;
            }
            if(zeros==c.size()) cout<<"0";
            else
            {
                int goodpoint = c.size()-point;
                string result="";
                bool flag = false;
                for(int i=c.size()-1; i>=0; i--)
                {
                    if(i+1==goodpoint) { result=result + '.'; flag=true;}
                    if(c[i]=='0' && !flag) continue;
                    result = result + c[i];
                    flag = true;
                }
                reverse(result.begin(),result.end());
                string finres="";
                flag = false;
                for(int i=0; i<result.size(); i++)
                {
                    if(result[i]=='0' && !flag) continue;
                    finres = finres + result[i];
                    flag = true;
                }
                cout<<finres<<endl;
            }

        getchar();
    }
    return 0;
}
