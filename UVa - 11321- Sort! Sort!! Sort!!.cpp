#include<bits/stdc++.h>

using namespace std;

struct arr{
  int number;
  int mod;
};

bool odd(int x)
{
    if(x<0)  x = x* (-1);
    if(x%2!=0) return true;
    return false;
}
bool even(int x)
{
    if(x<0)  x = x* (-1);
    if(x%2==0) return true;
    return false;
}


bool cmp(arr x, arr y)
{
    if(x.mod<y.mod)
        return true;
    if(x.mod == y.mod)
    {
        if(odd(x.number) && even(y.number)) return true;
        if(odd(x.number) && odd(y.number) && (x.number>y.number)) return true;
        if(even(x.number) && even(y.number) && (x.number<y.number)) return true;
    }
    return false;
}

int main()
{
    int n, m;
    while(scanf("%d %d",&n, &m)==2)
    {
        printf("%d %d\n", n, m);
        if(m==0 && n==0) break;
        int x;
        arr a[10010];
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a[i].number = x;
            a[i].mod = x%m;
        }
        sort(a, a+n, cmp);
        for(int i=0; i<n; i++)
            cout<<a[i].number<<endl;
    }
    return 0;
}
