#include<bits/stdc++.h>

using namespace std;

int num[6];
bool visited[6];
bool check;
void DFS(int cnt, int sum)
{
    if(cnt==5 && sum==23)
    {
        check = true;
        return;
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            if(!visited[i])
            {
                visited[i] = true;
                DFS(cnt+1,sum+num[i]);
                DFS(cnt+1,sum-num[i]);
                DFS(cnt+1,sum*num[i]);
                visited[i] = false;
            }
        }
    }
}

int main()
{
    int a, b, c, d, e;
    while(scanf("%d %d %d %d %d",&a, &b, &c, &d, &e) && a && b && c && d && e)
    {
        num[0] = a, num[1] = b, num[2]=c, num[3]=d, num[4]=e;
        check = false;
        for(int i=0; i<5; i++)
        {
            visited[i] = true;
            DFS(1,num[i]);
            visited[i] = false;
        }
        if(check)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}
