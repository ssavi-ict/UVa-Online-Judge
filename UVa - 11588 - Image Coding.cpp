#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    for(int caseno=1; caseno<=test; caseno++)
    {
        map<char,int>mymap;
        map<char,int>::iterator it;
        for(int i='A'; i<='Z' ;i++)
        {
            mymap.insert(make_pair(i,0));
        }
        int r, c, m, n;
        scanf("%d %d %d %d", &r, &c, &m, &n);
        char ch;
        for(int i=0; i<r; i++)
        {
            getchar();
            for(int j=0; j<c; j++)
            {
                ch = getchar();
                mymap[ch]++;
            }

        }
        int cnt=0, maxe=0;
        for(it=mymap.begin(); it!=mymap.end(); ++it)
        {
            if(it->second>maxe) {  maxe = it->second; cnt=1; }
            else if(it->second==maxe) cnt++;
        }
        int maxb = (maxe*cnt) * m;
        int minb = ((r*c) - (maxe*cnt))*n;
        int tot = maxb + minb;
        printf("Case %d: %d\n", caseno, tot);
    }
    return 0;
}
