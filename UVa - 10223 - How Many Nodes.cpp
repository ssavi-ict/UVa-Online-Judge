#include<bits/stdc++.h>

using namespace std;

long long int catalan[30];

int solve()
{
    catalan[0]=1;
    int i = 0;
    while(i<25)
    {
        catalan[i+1] = (catalan[i] * (4*i + 2))/(i + 2);
        i++;
    }
}

int main()
{
    solve();
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        for(int i = 1; i<25; i++)
        {
            if(n==catalan[i])
                 { printf("%d\n",i); break; }
        }
    }
    return 0;
}
/*
I have solved this by Catalan Expression's Recurrence Relation
C(n) = (2*(2n+1)/(n+2)) * C(n-1);
Where C0 = 1
*/
