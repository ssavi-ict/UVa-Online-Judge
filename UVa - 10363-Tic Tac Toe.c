#include<stdio.h>
#include<string.h>
#include<ctype.h>

char s[4][4];

char winner(char ch)
{
    return
    (s[0][0]==ch && s[0][1]==ch && s[0][2]==ch)
    ||(s[1][0]==ch && s[1][1]==ch && s[1][2]==ch)
    ||(s[2][0]==ch && s[2][1]==ch && s[2][2]==ch)
    ||(s[0][0]==ch && s[1][0]==ch && s[2][0]==ch)
    ||(s[0][1]==ch && s[1][1]==ch && s[2][1]==ch)
    ||(s[0][2]==ch && s[1][2]==ch && s[2][2]==ch)
    ||(s[0][0]==ch && s[1][1]==ch && s[2][2]==ch)
    ||(s[0][2]==ch && s[1][1]==ch && s[2][0]==ch);

}

int main()
{
    int n, counto, countx, i, j, winx, wino ;
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        countx=0;
        counto=0;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                s[i][j] = getchar();
                if(s[i][j]=='X') countx++;
                if(s[i][j]=='O') counto++;
            }
            getchar();
        }

        winx = winner('X');
        wino = winner('O');
        if((winx&&wino) || (winx && (countx!=1+counto)) || (wino && (countx!=counto)) || (countx-counto)!=1 && (countx-counto!=0))
            puts("no");
        else
            puts("yes");
    }
    return 0;
}
