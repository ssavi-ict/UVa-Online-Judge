#include<bits/stdc++.h>
#define LL long long int
#define ULL unsigned long long int

using namespace std;

ULL factarr[21];

ULL fact(int x)
{
    if(x==0) return 1;
    else factarr[x] = x * fact(x-1);

    return factarr[x];
}

int main()
{
    fact(20);
    string s;
    int test;
    scanf("%d", &test);
    getchar();
    for(int caseno=1; caseno<=test; caseno++)
    {
        getline(cin,s);
        int sz = s.size();
        ULL res = factarr[sz];
        for(int j = 'A'; j<='Z'; j++)
        {
            int cnt = 0;
            for(int i=0; i<sz; i++)
            {
                if(s[i]==j) cnt++;
            }
            if(cnt>1)
              res = res / factarr[cnt];
        }
        printf("Data set %d: %llu\n",caseno, res);
    }
    return 0;
}
