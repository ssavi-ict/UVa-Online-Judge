#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int arr[n+1];
        for(int i=0; i<n; i++) scanf("%d",arr+i);

        sort(arr,arr+n);
        bool flag = false;
        for(int i=n-1; i>=0 && !flag; i--)
        {
            for(int j=0; j<n && !flag; j++)
            {
                if(j==i) continue;
                for(int k=j+1; k<n && !flag; k++)
                {
                    if(k==i) continue;
                    for(int l=k+1; l<n && !flag; l++)
                    {
                        if(l==i) continue;
                        if(arr[i]==(arr[j]+arr[k]+arr[l]))
                        {
                            printf("%d\n", arr[i]);
                            flag = true;
                        }
                    }
                }
            }
        }
        if(!flag)
            printf("no solution\n");
    }
    return 0;
}
