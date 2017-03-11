#include<bits/stdc++.h>
#define S1(a) scanf("%d",&a)

using namespace std;

int rp[2000001];

int main()
{
    int len, n, count, min;
    string a;
    while(S1(n)==1)
    {
        if(n==0)
            break;
        cin>>a;
        int l=0, c=0;
        min = 2000000;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='Z')
              { min = 0; c=1; break; }
            else if(a[i]=='R')
              rp[l++]=i;
        }
        if(c==0)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]=='D')
                {
                    for(int j=0; j<l; j++)
                    {
                        int d = abs(i-rp[j]);
                        if(d<min)
                            min = d;
                    }
                }
            }
            printf("%d\n",min);
        }
        else
            printf("%d\n",min);
    }
    return 0;
}
