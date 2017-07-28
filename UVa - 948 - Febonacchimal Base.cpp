#include<bits/stdc++.h>

using namespace std;

int arr[50];
int fib(int X)
{
    if(X==0 || X==1) return 1;
    else if(arr[X]==0) arr[X] = fib(X-1) + fib(X-2);

    return arr[X];
}

int main()
{
    fib(44);
    arr[0]=1; arr[1] = 1;
    //for(int i = 0; i<44; i++) cout<<arr[i]<<endl;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n, m;
        scanf("%d",&n);
        m = n;
        string result="";
        bool flag = false;
        for(int i=44; i>0; i--)
        {
            if(arr[i]>n)
            {
                if(flag) result = result + '0';
                continue;
            }
            result = result + '1';
            n = n - arr[i];
            flag = true;
        }
        cout<<m<<" = "<<result<<" (fib)"<<endl;
    }
    return 0;
}
