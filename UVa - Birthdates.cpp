#include<bits/stdc++.h>

using namespace std;

struct data{
    string name;
    int date, month , year;
};

bool cmp(data a, data b)
{
    if(a.year==b.year)
    {
        if(a.month==b.month)
        {
           return a.date<b.date;
        }
        else
             return a.month<b.month;
    }
    else
        return a.year<b.year;
}


int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        data man[100];
        string a;
        int d, m, y;
        for(int i=0; i<n; i++)
        {
            cin>>a>>d>>m>>y;
            man[i].name = a;
            man[i].date = d;
            man[i].month = m;
            man[i].year = y;
        }
        sort(man, man+n, cmp);
        //printf("%s\n%s\n", man[0].name, man[n-1].name);
        cout<<man[n-1].name<<endl<<man[0].name<<endl;
    }
    return 0;
}
