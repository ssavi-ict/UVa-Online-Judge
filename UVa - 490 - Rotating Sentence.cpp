#include<bits/stdc++.h>

using namespace std;

int main()
{
    char line[115][115];
    char s[105];
    int n = 0, m=0;
    memset(line,' ',sizeof(line));
    while(gets(s))
    {
        if(strcmp(s,"")==0) break;
        else
        {
            strcpy(line[n],s);
            if(strlen(s)>m) {m = strlen(s);}
            line[n][strlen(line[n])]=' ';
            n++;
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            cout<<line[j][i];
        }
        printf("\n");
    }
    return 0;
}
