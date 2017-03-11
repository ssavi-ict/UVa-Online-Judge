#include<bits/stdc++.h>
#define C 12.01
#define H 1.008
#define	O 16.00
#define N 14.01

using namespace std;

int main()
{
    char s[100];
    int t, c, h, o, n, d, xc, xh, xo, xn;
    char ch;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s",s);
        int sz = strlen(s);
        c = h = o = n = d = xc = xh = xo = xn =0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='C') { c++; ch='C'; }
            else if(s[i]=='H') { h++; ch='H'; }
            else if(s[i]=='O') { o++; ch = 'O'; }
            else if(s[i]=='N') { n++; ch = 'N'; }
            else
            {
                d = d*10 + (s[i]-'0');
                if(isalpha(s[i+1]) || (i+1==sz))
                {
                    if(ch=='C')  {xc = (xc-1) + d;  d = 0;}
                    else if(ch=='H')  {xh = (xh-1) + d;  d = 0;}
                    else if(ch=='O')  {xo = (xo-1) + d;  d = 0;}
                    else if(ch=='N')  {xn = (xn-1) + d;  d = 0;}
                }
            }
        }
        double res = (((xc+c))*C + ((xh+h))*H + ((xo+o))*O + ((xn+n))*N);
        printf("%.3lf\n",res);
    }
    return 0;
}
