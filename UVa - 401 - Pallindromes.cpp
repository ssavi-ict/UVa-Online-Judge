#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, ms;
    char pal[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    char mpal[]={'A',' ',' ',' ','3',' ',' ','H','I','L',' ','J','M',' ','O',' ',' ',' ','2','T','U','V','W','X','Y','5','O','1','S','E',' ','Z',' ',' ','8',' '};
    while(getline(cin,s))
    {
        bool is_palin = true;
        int j = s.size()-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[j]!=s[i]) { is_palin = false; break; }
            j--;
        }
        ms="";
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<36; j++)
            {
                if(s[i]==pal[j])
                {
                    ms = ms + mpal[j];
                    break;
                }
            }
        }
        //cout<<ms<<endl;
        bool is_mirror = true;
        for(int i =0, j = s.size()-1; i<ms.size() , j>=0 ; i++, j--)
        {
            if(ms[i]!=s[j])
            {
                is_mirror = false;
                break;
            }
        }
        if(is_palin && is_mirror)
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(!is_palin && is_mirror)
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else if(is_palin && !is_mirror)
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
