#include<bits/stdc++.h>

using namespace std;

int powerof(int r, int p)
{
    if(p==0) return 1;
    else return r*powerof(r,p-1);
}

char now[]={'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s[0]=='-') break;
        long long int last = 0;
        int id = 0;
        if(s[0]=='0' && s[1]=='x') id = 2;
        if(id==0) //D to Hex
        {
            for(int i=id; i<s.size(); i++) last = last*10 + (s[i]-'0');
            string reshex=""; int mod;
            while(last!=0)
            {
                mod = last%16;
                reshex = reshex + (now[mod]);
                last = last/16;
            }
            reverse(reshex.begin(),reshex.end());
            cout<<"0x"<<reshex<<endl;
        }
        else
        {
            long long int resdec = 0;
            int mod, p=0, a;
            for(int i=s.size()-1; i>=2; i--)
            {
                if(s[i]=='A') a = 10;
                else if(s[i]=='B') a = 11;
                else if(s[i]=='C') a = 12;
                else if(s[i]=='D') a = 13;
                else if(s[i]=='E') a = 14;
                else if(s[i]=='F') a = 15;
                else a = s[i]-'0';
                resdec = resdec + a*(powerof(16,p));
                p++;
            }
            cout<<resdec<<endl;
        }
    }
    return 0;
}
