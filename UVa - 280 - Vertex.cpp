#include<bits/stdc++.h>
#define i64 long long

using namespace std;

vector<int>graph[105];
int loop[105];
bool visited[105];
int cnt;

void init()
{
    for(int i=0; i<=100; i++){
        graph[i].clear();
        loop[i] = -1;
    }
}

void DFS(int u)
{
    //cout<<u<<endl;
    visited[u] = true;
    for(int i=0; i<graph[u].size(); i++){
        int v = graph[u][i];
        if(!visited[v]){
            DFS(v);
        }
        else{
            loop[v] = 1;
        }
    }
}

int main()
{
    //freopen("Input.txt", "r", stdin);
    int n;
    while(scanf("%d", &n)==1 && n){
        init();
        int u, v;
        while(scanf("%d", &u)==1 && u){
            while(scanf("%d", &v)==1 && v){
                graph[u].push_back(v);
                //cout<<"Here "<<v<<endl;
            }
        }

        int Q;
        scanf("%d", &Q);
        while(Q--){
            int u;
            scanf("%d", &u);
            memset(visited, false, sizeof visited);
            memset(loop, -1, sizeof loop);
            cnt = 0;
            DFS(u);
            int tot = 0;
            for(int i=1; i<=n; i++){
                if(!visited[i]) tot++;
            }
            if(loop[u]==-1){
                visited[u] = false, tot++;
                //cout<<"OK "<<u<<endl;
            }
            printf("%d", tot);
            for(int i=1; i<=n; i++){
                if(!visited[i]){
                    printf(" %d", i);
                }
            }
            puts("");
        }
    }

}
