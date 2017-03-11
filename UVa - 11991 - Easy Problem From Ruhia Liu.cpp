#include<bits/stdc++.h>
#define clear(a) memset(a,0,sizeof(a))
using namespace std;

vector<int>number[1000001];

int main()
{

    int m, n;
    while(scanf("%d %d",&m,&n)==2)
    {
        clear(number);
        int x;
        for(int i=1; i<=m; i++)
        {
           cin>>x;
           number[x].push_back(i);
        }
        int k, v;
        for(int i=0; i<n; i++)
        {
            cin>>k>>v;
            if(k>number[v].size())
                printf("0\n");
            else
                printf("%d\n",number[v][k-1]);
        }
    }
    return 0;
}
