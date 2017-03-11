#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) & n!=0)
    {
        int a[n+10];
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        int peaks = 0;
        for(int i=1; i<n-1; i++)
        {
            if(a[i]>a[i+1] && a[i]>a[i-1]) peaks++;
            else if(a[i]<a[i+1] && a[i]<a[i-1]) peaks++;
        }
        if(a[0]>a[1] && a[0]>a[n-1]) peaks++;
        else if(a[0]<a[1] && a[0]<a[n-1]) peaks++;
        if(a[n-1]>a[n-2] && a[n-1]>a[0]) peaks++;
        else if(a[n-1]<a[n-2] && a[n-1]<a[0])peaks++;
        printf("%d\n",peaks);
    }
    return 0;
}

