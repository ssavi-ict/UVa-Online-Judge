#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    string s;
    char st[128];
    while(t--)
    {
        cin>>s;
        int m;
        scanf("%d",&m);
        for(int i=0; i<128; i++)
            st[i] = i;
        for(int j=0; j<m; j++)
        {
            char a, b;
            cin>>a>>b;
            for(int i='A'; i<='Z'; i++)
            {
                if(st[i]==b)
                    st[i] = a;
            }
        }
        for(int i=0; i<s.size(); i++)
            printf("%c",st[s[i]]);
        printf("\n");
    }
    return 0;
}
