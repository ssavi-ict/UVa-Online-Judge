#include<bits/stdc++.h>

using namespace std;

int main()
{
    char lis[13];
    int tc, game, j=0;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&game);
        int b=0, w=0, a=0, t=0;
        scanf("%s",lis);
        int len = strlen(lis);
        for(int i=0; i<len; i++)
        {
            if(lis[i]=='B')
                b++;
            else if(lis[i]=='W')
                w++;
            else if(lis[i]=='A')
                a++;
            else if(lis[i]=='T')
                t++;
        }
        printf("Case %d: ",++j);
        if(a==game)
            printf("ABANDONED\n");
        else if((b+a==game) && b!=0)
            printf("BANGLAWASH\n");
        else if((w+a==game) && w!=0)
            printf("WHITEWASH\n");
        else if(b==w)
            printf("DRAW %d %d\n",b,t);
        else if(b>w)
            printf("BANGLADESH %d - %d\n",b,w);
        else
            printf("WWW %d - %d\n",w,b);
    }
    return 0;
}
