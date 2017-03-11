#include<bits/stdc++.h>

using namespace std;
int steps[30];
stack<char>root;
int main()
{
    int test, caseno=0;
    string s;
    cin>>test;
    getchar();
    while(test--)
    {
        //memset(steps,0,sizeof(steps));
        //ABCDFFDCEGHIIHJJGKKEBLLA
        getline(cin,s);
        root.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i+1] && s[i]!=root.top())
            {
                i++;
                steps[s[i]]++;
                steps[root.top()]++;
            }
            else if(s[i]!=root.top())
            {
                steps[root.top()]++;
                steps[s[i]]++;
                root.push(s[i]);
            }
            else if(s[i]==root.top())
            {
                root.pop();
            }
        }
        printf("Case %d\n",++caseno);
        for(int i = 'A'; i<='Z'; i++)
        {
            if(steps[i])
                printf("%c = %d\n", i, steps[i]);
        }
        for(int i='A'; i<='Z'; i++)
            steps[i]=0;
    }
    return 0;
}

