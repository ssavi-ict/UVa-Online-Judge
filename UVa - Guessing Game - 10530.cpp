#include<bits/stdc++.h>

using namespace std;
int high[10];
int low[10];
int main()
{
    int n;

    char s[15];
    int t =0, j=0 ;
    while(scanf("%d",&n) && n!=0)
    {
        getchar();
        gets(s);
        if(strcmp(s,"too high")==0)  { high[t++] = n;}
        else if(strcmp(s,"too low")==0)  { low[j++] = n;}
        else
        {
            bool flag = false;
            int maxl = 0, minh = 99;
            for(int i=0; i<10; i++)
            {
                //cout<<low[i]<<' '<<high[i]<<endl;
                if((high[i]>0 && n==high[i])  || (low[i]>0 && n==low[i]))
                {
                    flag = true;
                }
                if(low[i]!=0)
                {
                    maxl = max(maxl, low[i]);
                }
                if(high[i]>0)
                   minh = min(minh, high[i]);
            }
            //cout<<maxl<<' '<<minh<<endl;
            if(!flag && n>maxl && n<minh)
            {
                puts("Stan may be honest");
            }
            else
                puts("Stan is dishonest");
            t = 0;j = 0;
            for(int i=0; i<10; i++)
            {
                high[i] = 0;
                low[i] = 0;
            }
        }
    }
    return 0;
}
