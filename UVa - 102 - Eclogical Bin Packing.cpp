#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b1, b2, b3, g1, g2, g3, c1, c2, c3, a[6];
    char s[10][10];
    while(scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3)==9)
    {
        a[0]=b2+b3+c1+c3+g1+g2;
        strcpy(s[0],"BCG");
        a[1]=b2+b3+c1+c2+g1+g3;
        strcpy(s[1],"BGC");
        a[2]=b1+b3+c2+c3+g1+g2;
        strcpy(s[2],"CBG");
        a[3]=b1+b2+c2+c3+g1+g3;
        strcpy(s[3],"CGB");
        a[4]=b1+b3+c1+c2+g3+g2;
        strcpy(s[4],"GBC");
        a[5]=b2+b1+c1+c3+g3+g2;
        strcpy(s[5],"GCB");
        int minx = *min_element(a,a+6);
        for(int i=0; i<6; i++)
        {
            if(minx==a[i])
            {
                printf("%s %d\n",s[i],a[i]);
                break;
            }
        }
    }
    return 0;
}
