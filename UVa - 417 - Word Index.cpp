#include<bits/stdc++.h>

using namespace std;

map<string,int>mymap;
string s="abcdefghijklmnopqrstuvwxyz";
void hashtable()
{

    string a, b, c, d, e, st;
    int index=1;
    for(int i=0; i<26; i++)
    {
        st = s[i];
        mymap[st]=index;
        index++;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            a = s[i];
            b = s[j];
            st = a+b;
            mymap[st]=index;
            index++;
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                a = s[i];
                b = s[j];
                c = s[k];
                st = a+b+c;
                mymap[st]=index;
                index++;
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    a = s[i];
                    b = s[j];
                    c = s[k];
                    d = s[l];
                    st = a+b+c+d;
                    mymap[st]=index;
                    index++;
                }
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    for(int m=l+1; m<26; m++)
                    {
                        a = s[i];
                        b = s[j];
                        c = s[k];
                        d = s[l];
                        e = s[m];
                        st = a + b + c + d + e;
                        mymap[st]=index;
                        index++;
                    }
                }
            }
        }
    }
}

int main()
{
    hashtable();
    char str[20];
    while(scanf("%s",str)==1)
    {
        cout<<mymap[str]<<endl;
    }
    return 0;
}
