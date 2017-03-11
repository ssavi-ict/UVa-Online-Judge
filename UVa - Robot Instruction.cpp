#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d",&num);int j=1, pos=0;
        int com[105]={0};
        char s[10], b[5]; int n;
        for(int i=1; i<num+1; i++)
        {
            scanf("%s",s);
            if(s[0]=='L')
            {
                com[j++] = -1;
                pos = pos - 1;
            }
            else if(s[0]=='R')
            {
                com[j++] = 1;
                pos = pos + 1;
            }
            else
            {
                scanf("%s %d", b, &n);
                com[j++] = com[n];
                pos = pos + com[n];
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
