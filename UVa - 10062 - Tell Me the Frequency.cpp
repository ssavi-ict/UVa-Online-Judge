#include<bits/stdc++.h>

using namespace std;

struct check{
int a, b;
};

bool cmp(check x, check y)
{
    if(x.b<y.b)  return 1;
    if(x.b==y.b && x.a>y.a ) return 1;
    return 0;
}

int main()
{
    string s;
    int space = 0;
    while(getline(cin,s))
    {
        if(space!=0)
            printf("\n");
        space = 1;
        check arr[1005];
        map< char , int >mymap;
        map< char , int >::iterator it;
        for(int i=0; i<s.size(); i++)
        {
            mymap[s[i]]++;
        }
        int i = 0;
        for(it=mymap.begin(); it!=mymap.end(); ++it)
        {
            arr[i].a = it->first;
            arr[i].b = it->second;
            i++;
         }
         int j = i;
         sort(arr, arr+j, cmp);
         for(int i=0; i<j; i++)
            cout<<arr[i].a<<" "<<arr[i].b<<endl;
    }
    return 0;
}
