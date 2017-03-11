#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        getline(cin,a);
        int len = a.size();
        stack< char >s;
        if(a.compare("\n")==0)
        {
            printf("Yes\n");
        }
        else if(len == 1 || len%2!=0)
        {
            printf("No\n");
        }
        else
        {
            int check=0;
            for(int i=0; i<len; i++)
            {
                if(a[i]=='(' || a[i]=='[')
                s.push(a[i]);
                else if(a[i]==')'  && !s.empty() && s.top()=='(')
                s.pop();
                else if(a[i]==']'  && !s.empty() && s.top()=='[')
                s.pop();
                else
                    check = 1;
            }
            if(s.empty() && check==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
