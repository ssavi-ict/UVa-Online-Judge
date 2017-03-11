#include<bits/stdc++.h>

using namespace std;
vector<int>up;
vector<int>down;
int main()
{
    int n, tot;
    while(scanf("%d",&n)==1)
    {
        up.clear();
        down.clear();
        tot = 0;
        for(int i = n+1; i<=2*n; i++)
        {
            int top = i*n;
            int bot = i-n;
            if(top%bot==0)
            {
                tot++;
                up.push_back(top/bot);
                down.push_back(i);
            }
        }
        printf("%d\n",tot);
        for(int i=0; i<tot; i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",n,up[i],down[i]);
        }
    }
    return  0;
}
