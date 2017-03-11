#include<bits/stdc++.h>

using namespace std;

int main()
{
    int round;
    while(scanf("%d",&round)==1 && round!=-1)
    {
        char main[1001], guess[1001];
        getchar();
        scanf("%s%s",main,guess);
        set<char>myset;
        int sz = strlen(main);
        int szg = strlen(guess);
        int draw=0;
        for(int i=0; i<sz; i++)
            myset.insert(main[i]);
        int setsize = myset.size();
        for(int i=0; i<szg; i++)
        {
            if(!myset.empty())
            {
                myset.erase(guess[i]);
                if(myset.size()<setsize)
                {
                    draw--;
                    setsize=myset.size();
                }
            }
            else break;
            draw++;
        }
        printf("Round %d\n",round);
        if(myset.empty() && draw<7)  printf("You win.\n");
        else if(!myset.empty() && draw<7)  printf("You chickened out.\n");
        else  printf("You lose.\n");
    }
    return 0;
}
