#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, r;
    vector<int>morning;
    vector<int>evening;
    while(scanf("%d %d %d", &n, &d, &r)==3 && n && d && r)
    {
        int x;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            morning.push_back(x);
        }
        sort(morning.begin(),morning.end());
        for(int i=0; i<n; i++)
        {
             scanf("%d",&x);
             evening.push_back(x);
        }
        sort(evening.begin(),evening.end(),greater <int>());
        int overtime = 0;
        for(int i=0; i<n; i++)
        {
            int h = morning[i] + evening[i];
            if(h>d)
                overtime = overtime + (h-d);
        }
       cout<<overtime*r<<endl;
       morning.clear();
       evening.clear();
    }
    return 0;
}
