#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int key[201];
    while(scanf("%d",&n) && n>0)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&key[i]);
        int loop;
        string input, res, second;
        while(scanf("%d",&loop) && loop>0)
        {
            getchar();
            getline(cin,second);
            int sz = second.size();
            //loop = loop % sz;
            input = second;
            res ="";
            for(int t=1; t<=loop; t++)
            {
                for(int i=0; i<n; i++)
                    res = res + " ";
                for(int j=0; j<n; j++)
                {
                    //cout<<key[j]-1<<' '<<input[j]<<endl;
                    if(input[j]>=33 && input[j]<=126)
                        res[key[j]-1] = input[j];
                }
                input = res;
                res.erase(res.begin(),res.begin()+n);
            }
            cout<<input<<endl;
        }
        cout<<endl;
    }
    return 0;
}
