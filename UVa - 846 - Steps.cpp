#include<bits/stdc++.h>

using namespace std;
long long int maxdiff[100000];
void precalculation()
{
    maxdiff[0]=0;
    int raise = 1;
    for(int i=1; i<92682; i++)
    {
        if(i%2!=0)
           maxdiff[i] = maxdiff[i-1] + raise;
        else
           {maxdiff[i] = maxdiff[i-1] + raise; raise++;}
    }
}

int main()
{
    precalculation();
    int a, b, test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d", &a, &b);
        long long int diff = b - a;
        for(int i=0; i<92682; i++)
        {
            if(diff<=maxdiff[i])
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
