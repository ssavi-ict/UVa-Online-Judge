#include<bits/stdc++.h>
#define MAX 20000000
#define pii pair<int, int>

using namespace std;

vector<pii>twinlist;

int status[(MAX/32)+2];

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAX));
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
    for(int i=3; i<=MAX; i=i+2)
    {
        int sec = i+2;
        if(check(status[i>>5], i&31)==0 && check(status[sec>>5], sec&31)==0)
        {
            twinlist.push_back(pii(i,sec));
        }
    }
}


int main()
{
    int ith;
    sieve();
    while(scanf("%d",&ith)==1)
    {
        pii top = twinlist[ith-1];
        cout<<"("<<top.first<<", "<<top.second<<")"<<endl;
    }
    return 0;
}
