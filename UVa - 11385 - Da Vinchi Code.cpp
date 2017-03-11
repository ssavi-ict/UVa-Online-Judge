#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, test;
    scanf("%d",&test);
    map<long long int,int>mymap;
    long long int f[100];
    f[0] = 1;
    f[1] = 2;
    mymap[1] = 0;
    mymap[2] = 1;

    for ( int i = 2; f[i - 1] < (long long int) 2147483647; i++ ) {
        f[i] = f[i - 1] + f[i - 2];
        mymap[f[i]] = i;
    }
    while(test--)
    {
        scanf("%d",&n);
        int a[n+1];
        int maxi = -1;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>maxi)
                maxi = a[i];
        }
        getchar();
        char s[150];
        gets(s);
        char res[200];
        memset(res,' ', sizeof(res));
        res[mymap[maxi]+1]=0;
        int l=0;
        for(int i=0; i<n; i++)
        {
            while(!isupper(s[l]))l++;
            res[mymap[a[i]]] = s[l];
            l++;
        }
        cout<<res<<endl;
    }
    return 0;
}

