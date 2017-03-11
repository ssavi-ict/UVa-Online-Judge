#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    queue< int >q;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        int j =0;
        cout<<"Discarded cards:";
        while(q.size()>1)
        {
            cout<<' '<<q.front();
            q.pop();
            int a = q.front();
            q.pop();
            if(q.size()>=1)
                cout<<',';
            q.push(a);
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;
        q.pop();

    }
    return 0;
}

