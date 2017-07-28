#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[205];
    while(scanf("%s",a) && a[0]!='*')
    {
        int sza = strlen(a), tot=0, cnt=0;
        for(int i=0; i<sza; i++)
        {
            if(a[i]=='/')
            {
                if(tot==64) cnt++;
                tot = 0;
                continue;
            }
            if(a[i]=='W') tot = tot + 64;
            else if(a[i]=='H') tot = tot + 32;
            else if(a[i]=='Q') tot = tot + 16;
            else if(a[i]=='E') tot = tot + 8;
            else if(a[i]=='S') tot = tot + 4;
            else if(a[i]=='T') tot = tot + 2;
            else if(a[i]=='X') tot = tot + 1;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
