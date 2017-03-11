#include<bits/stdc++.h>

using namespace std;

int house[11], street[11];

void precalculation()
{
    house[1]=6;
    street[1]=8;
    int x = 1;
    int cnt = 2;
    while(cnt<=10)
    {
        house[cnt]=(house[cnt-1]*6)-x;
        x = house[cnt-1];
        street[cnt]=house[cnt]+house[cnt-1]+street[cnt-1];
        cnt++;
    }
}

int main()
{
    precalculation();
    for(int i=1; i<=10; i++)
        printf("%10d%10d\n",house[i], street[i]);
    return 0;
}
