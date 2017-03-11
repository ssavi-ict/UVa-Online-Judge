#include<bits/stdc++.h>

using namespace std;
char x[1002], y[1002], b[1002][1002];
int i, j, k, l, c[1002][1002];
int coun;

void print_lcs(int i, int j)
{
    if(i==0 || j==0)
        return;
    if(b[i][j]=='c')
    {
        print_lcs(i-1, j-1);
        coun++;
    }
    else if(b[i][j]=='u')
        print_lcs(i-1, j);
    else
        print_lcs(i, j-1);

}

void lcs_length()
{
    int m = strlen(x);
    int n = strlen(y);
    for(i=0; i<=m; i++)
        c[i][0] = 0;
    for(j=0; j<=n; j++)
        c[0][j] = 0;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 'c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j] = c[i-1][j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }
    print_lcs(m,n);
}

int main()
{

    while(gets(x))
       {
       	gets(y);
       	coun=0;
        lcs_length();
        printf("%d\n",coun);
       }
    return 0;
}
