#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005], q[1005];
    int t, n;
    cin>>t;
    while(t--)
    {
        scanf("%s",s);
        cin>>n;
        while(n--)
        {
            scanf("%s",q);
            int len = strlen(q);
            int j = 0;
            bool flag = false;
            if(s[0]==q[0])
            {
                for(int i=0; i<len; i++)
                {
                    if(s[j]==q[i])
                    {
                        j++;
                    }
                    else if(s[j]=='\0')
                    {
                        flag = true;
                        break;
                    }
                    else if(s[j]!=q[i])
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag)
                    printf("n\n");
                else
                    printf("y\n");
            }
            else
                printf("n\n");
        }

    }
    return 0;
}
