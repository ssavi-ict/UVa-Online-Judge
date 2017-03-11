#include<bits/stdc++.h>

using namespace std;

int main()
{
    int fx[100];
    fx[0]=1; fx[1]=1; fx[2]=2; fx[3]=2; fx[4] = 3;
    for(int i=5; i<77; i++)
    {
        fx[i] = fx[i-1] + fx[i-5];
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",fx[n]);
    }
    return 0;
}
