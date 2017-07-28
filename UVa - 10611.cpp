#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int v[n+2];
        memset(v,0,sizeof(v));
        int x;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&v[i]);
        }
        int q;
        scanf("%d",&q);
        for(int i=0; i<q; i++)
        {
            scanf("%d",&x);
            int first = 1, last = n, mid = (first+last)/2;
            int tall = 0, shrt = 0;
            while(first<=last)
            {
                if(x>v[mid])
                    first = mid + 1;
                else if(v[mid]==x)
                {
                    for(int i=mid-1; i>=1; i--)
                    {
                        if(v[i]<x)
                        {
                            shrt = v[i]; break;
                        }
                    }
                    for(int i=mid+1; i<=n; i++)
                    {
                        if(v[i]>x)
                        {
                            tall = v[i]; break;
                        }
                    }
                    break;
                }
                else
                    last = mid - 1;
                mid = (first+last)/2;
            }
            //cout<<first<<' '<<last<<endl;
            if(first>last)
            {
                first = mid;
                last = mid + 1;
                if(v[first]==0) shrt = 0;
                else shrt = v[first];
                if(v[last]==0) tall = 0;
                else tall = v[last];
            }
            if(shrt==0) printf("X ");
            else printf("%d ",shrt);
            if(tall==0) printf("X\n");
            else printf("%d\n",tall);
        }
    }
    return 0;
}
