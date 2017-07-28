#include<bits/stdc++.h>
#define MAX 2002

using namespace std;

int status[(MAX/32)+2];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
    status[1>>5]=SET(status[1>>5],1&31);
    for(int i=3; i<=sqrtN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=MAX; j= j + (i<<1))
            {
                status[j>>5]=SET(status[j>>5],j&31);
            }
        }
    }
}

int main()
{
    sieve();
    string s;
    int caseno, test;
    scanf("%d",&test);
    getchar();
    for(int caseno=1; caseno<=test; caseno++)
    {
        getline(cin,s);
        int sz = s.size();
        sort(s.begin(),s.end());
        int tot=0;
        char ch = s[0];
        string res = "";
        for(int i=0; i<=sz; i++)
        {
            if(s[i]!=ch || i==sz)
            {
                if(check(status[tot>>5],tot&31)==0 && tot>0 && (tot==2||(tot%2!=0))) res = res + ch;
                ch = s[i];
                tot=0;
            }
            tot++;
        }
        if(res=="")
            cout<<"Case "<<caseno<<": empty"<<endl;
        else
           cout<<"Case "<<caseno<<": "<<res<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
#define MAX 2002

using namespace std;

int status[(MAX/32)+2];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
    status[1>>5]=SET(status[1>>5],1&31);
    for(int i=3; i<=sqrtN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=MAX; j= j + (i<<1))
            {
                status[j>>5]=SET(status[j>>5],j&31);
            }
        }
    }
}

int main()
{
    sieve();
    string s;
    int caseno, test;
    scanf("%d",&test);
    getchar();
    for(int caseno=1; caseno<=test; caseno++)
    {
        getline(cin,s);
        int sz = s.size();
        set<char>myset;
        set<char>::iterator it;
        for(int i=0; i<sz; i++) myset.insert(s[i]);
        string res = "";
        for(it=myset.begin(); it!=myset.end(); ++it)
        {
            int tot = 0;
            for(int i=0; i<sz; i++)
            {
                if(*it==s[i])
                    tot++;
            }
            if(check(status[tot>>5],tot&31)==0 && tot>0 && (tot==2 || tot%2!=0)) res = res + *it;
        }
        if(res=="")
            cout<<"Case "<<caseno<<": empty"<<endl;
        else
           cout<<"Case "<<caseno<<": "<<res<<endl;
    }
    return 0;
}
*/
