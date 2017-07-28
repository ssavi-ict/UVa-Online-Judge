#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, caseno=0;
    int arr[25];
    for(int i=1; i<25; i++)
    {
        if(i==4) { arr[i] = 3; continue; }
        if(i==5) { arr[i] = 8; continue; }
        if(i==6) { arr[i] = 21; continue; }

        if(i%2==0)
            arr[i] = ((i*i*i) - (16*i) +30)/6;
        else
            arr[i] = ((i*i*i) - (16*i) +27)/6;
    }
    while(scanf("%d",&n) && n>1)
    {
        printf("Case #%d: %d\n",++caseno, arr[n]);
    }
    return 0;
}

/*
This is a Dart Board sequence Problem . OESIS : 00773
For N>=7
If n is Even Then, Rule is ((i*i*i) - (16*i) +30)/6;
else Rule is((i*i*i) - (16*i) +27)/6;
*/
