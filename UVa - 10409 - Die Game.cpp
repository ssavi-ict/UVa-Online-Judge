#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    while(scanf("%d",&test)==1 && test)
    {
        char com[10];
        int top = 1, north = 2, west = 3, bottom = 6, south = 5, east = 4;
        int ptop, pnorth, pwest, pbottom, psouth, peast;
        for(int i=0; i<test; i++)
        {
            scanf("%s",com);
            if(com[0]=='n')
            {
                ptop = top; pnorth = north; pwest = west; pbottom = bottom; psouth = south; peast = east;
                bottom = pnorth; north = ptop; top = psouth; south = pbottom; east = peast; west = pwest;
            }
            else if(com[0]=='s')
            {
                ptop = top; pnorth = north; pwest = west;pbottom = bottom; psouth = south; peast = east;
                bottom = psouth; south = ptop; top = pnorth; north = pbottom; east = peast; west = pwest;
            }
            else if(com[0]=='e')
            {
                ptop = top; pnorth = north; pwest = west;pbottom = bottom; psouth = south; peast = east;
                east = ptop; bottom = peast; west = pbottom; top = pwest; north = pnorth; south = psouth;
            }
            else
            {
                ptop = top; pnorth = north; pwest = west;pbottom = bottom; psouth = south; peast = east;
                west = ptop; bottom = pwest; east = pbottom; top = peast; north = pnorth; south = psouth;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
