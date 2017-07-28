#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d", &n, &m);
        if((n-1)%(m-1)!=0)
            printf("cannot do this\n");
        else printf("%d\n",(n-1)/(m-1));
    }
    return 0;
}
