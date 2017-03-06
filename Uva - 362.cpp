#include<bits/stdc++.h>

using namespace std;
 
int main()
{
    long long int n, a[10], i, m, j, num, num2;

    while(cin>>n && n!=0)
    {
        vector< long long int >v;
        v.push_back(n);
        j=0;
        long long int na = n;
        printf("Original number was %lld\n",n);
        for(i=0; ; i++)
        {
            long long int t=0;
            while(na!=0)
            {
                a[t]=na%10;
                na=na/10;
                t++;
            }
            sort(a,a+t);
            num=0; num2 =0;
            for(int l=0, m=t-1 ; l<t, m>=0; l++, m--)
            {
                num = num*10 + a[m];
                num2 = num2*10 + a[l];
            }
            cout<<num<<" - "<<num2<<" = "<<num-num2<<endl;
            num = num - num2;
            int s = v.size();
            int f = 0;
            sort(v.begin(), v.end());
            if(binary_search (v.begin(), v.end(), num))
            {
                f=1; break;
            }
            if(f==1)
                break;
            v.push_back(num);
            na = num;
        }
        cout<<"Chain length "<<i+1<<endl<<endl;
    }
    return 0;
}
