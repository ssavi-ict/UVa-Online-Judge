#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;

long long int a[10000];
int main()
{
    long long int n, i, t, j=0, p, l, q;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&p,&n);
        q = p-n;
        l=0;
        if(p==n)
            printf("Case #%lld: 0\n",++j);
        else
        {
            printf("Case #%lld:",++j);

            for(i=1;i<=sqrt(q);i++)
            {
                if(q%i==0)
                {
                    a[l++]= i;
                    if(q/i!=i)
                        a[l++] = q/i;
                }
            }
            sort(a,a+l);
            for(i=0;i<l;i++)
             {
                 if(a[i]>n)
                   printf(" %lld",a[i]);
             }
             printf("\n");
        }
    }
    return 0;
}


