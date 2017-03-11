#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    cin.ignore(100, '\n');
    cin.ignore(100, '\n');

    for(int f=0; f<t; f++)
    {
        string a;
        printf("Case #%d:\n",f+1);
        while(getline(cin,a))
        {
            if(a=="")
                break;
            stringstream ss(a);
            string arr;
            int l = 1;
            while(ss>>arr)
            {
                if(arr.size()>=l)
                {
                    cout<<arr[l-1];
                    l++;
                }
            }
            printf("\n");
        }
        if(f<t-1)
            printf("\n");
    }
    return 0;
}
