#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int length[31]={0};
    int clen = 0;
    while(getline(cin,a))
    {
        if(a[0]=='#')
        {
            for(int j=1; j<31; j++)
            {
                if(length[j]!=0)
                    printf("%d %d\n",j, length[j]);
            }
            printf("\n");
            memset(length,0,sizeof(length));
        }
        else
        {
            for(int i=0; i<=a.size(); i++)
            {
                if(isalpha(a[i]))
                    {clen++;}
                else if(a[i]=='\'' || a[i]=='-')
                    continue;
                else if(a[i]==' ' || a[i]=='?' || a[i]=='.' || a[i]=='!' || a[i]==',' || (i==a.size() && a[i-1]!='-'))
                    { length[clen]++; clen = 0; }
            }
        }
    }
    return 0;
}
