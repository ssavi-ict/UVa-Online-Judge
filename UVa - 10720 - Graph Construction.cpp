#include<bits/stdc++.h>

using  namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n>0)
    {
        vector<int>seq;
        int x, sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            sum = sum + x;
            seq.push_back(x);
        }
        sort(seq.begin(),seq.end(), greater<int>());
        if(sum%2!=0 || seq[0]>=n)
        {
            printf("Not possible\n");
            continue;
        }

        bool flag = true;
        for(int k=0; k<n; k++)
        {
            int sumdi = 0;
            for(int i=0; i<k; i++)
                sumdi = sumdi + seq[i];
            int prok = k * (k-1);
            int summin = 0;
            for(int j=k; j<n; j++)
                summin = summin + min(seq[j],k);
            int tot = prok + summin;
            if(sumdi>tot)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            printf("Possible\n");
        else
            printf("Not possible\n");
    }
    return 0;
}
/*I have solved this by Erdos–Gallai theorem
if sumofdegrees is even & 1st index will greater than n then impossible
From ( k to n )
    from( i to k)
       do sum;
    calculate k*(k-1)
    for(k+1 to n)
        do minimum sum of degree[i],k
    do total of (k*(k-1)) & minimumsum
    if(minimumsum > total)
       then its impossible to form a graph.
    else possible

    Eg : Graph for 10 3 3 3 3 3 3 3 3 3 3

    *---*---*
   / \  |  / \
  *---* | *---*
   \ /  |  \ /
    *---*---*

*/
