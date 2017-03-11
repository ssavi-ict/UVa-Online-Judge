#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int x;
        while(scanf("%d",&x) && x!=0)
        {
            v.push_back(x);
            for(int i=1; i<n; i++)
            {
                scanf("%d",&x);
                v.push_back(x);
            }
            int j = 0;
            stack<int>st;
            for(int l=1; l<=n; l++)
            {
                st.push(l);
                while(!st.empty())
                {
                    if(st.top()==v[j])
                    {
                        st.pop();
                        j++;
                    }
                    else
                        break;
                }
            }
            if(st.empty())
                printf("Yes\n");
            else
                printf("No\n");
            v.clear();
        }
        printf("\n");
    }
    return 0;
}
