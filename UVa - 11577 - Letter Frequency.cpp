#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, res;
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        getline(cin,a);
        res.erase();
        int maxl = 0;
        for(char j='a'; j<='z'; j++)
        {
            int cnt=0;
            for(int i=0; i<a.size(); i++)
            {
                if(isalpha(a[i]) && tolower(a[i])==j)
                {
                    cnt++;
                }
            }
            if(cnt>maxl)
            {
                maxl = cnt;
                res.erase();
                res=j;
            }
            else if(cnt==maxl)
            {
                res = res + j;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
