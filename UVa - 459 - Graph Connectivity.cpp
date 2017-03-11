#include<bits/stdc++.h>

using namespace std;

vector<int>graph[1001];

int m, n;

int bfs()
{
    queue< int >q;
    int visited[1001]={0};
    int count=0;
    for(int i=0; i<=m; i++)
    {
        if(!visited[i])
        {
            visited[i]=1;
            q.push(i);
            while(!q.empty())
            {
                int top = q.front();
                for(int l=0; l<graph[top].size();l++)
                {
                    int down = graph[top][l];
                    if(!visited[down])
                    {
                        visited[down] = 1;
                        q.push(down);
                    }
                }
                q.pop();
            }
            count++;
        }
    }
    return count;
}

int main()
{
    int t, j=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("\n\n");
        char large[3];
        gets(large);
        m = large[0] - 'A';
        for(int i=0; i<=m; i++)
        {
            graph[i].clear();
        }
        string a;
        while(getline(cin,a))
        {
            if(a.size()==0) break;
            graph[a[0]-'A'].push_back(a[1]-'A');
            graph[a[1]-'A'].push_back(a[0]-'A');
        }
        int tot = bfs();
        if(j>1) printf("\n");
        printf("%d\n",tot);

        j++;
    }
    return 0;
}
