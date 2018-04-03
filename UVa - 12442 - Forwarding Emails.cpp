#include<bits/stdc++.h>
#define i64 long long

using namespace std;

vector<int>graph[100005];
bool visited[100005];
int len[100005];

int DFS(int u)
{
    //if(len[u]!=-1) return len[u];
    visited[u] = true;
    int ret = 0;
    for(int i=0; i<graph[u].size(); i++){
        int v = graph[u][i];
        if(!visited[v]){
            ret = ret + 1 + DFS(v);
        }
    }
    visited[u] = false;
    len[u] = ret;
    return len[u];
}

int main(){
    int test;
    scanf("%d", &test);
    int cs = 0;
    while(test--){
        for(int i=0; i<50005; i++){
            graph[i].clear();
            visited[i] = false;
            len[i] = -1;
        }
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            int u, v;
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
        }
        int ans = 0, idx;
        for(int i=1; i<=n; i++){
            if(len[i]==-1){
                int ret = DFS(i);
            }
            //cout<<i<<' '<<len[i]<<endl;
            if(len[i]>ans){
                ans = len[i];
                idx = i;
            }
        }
        printf("Case %d: %d\n", ++cs, idx);
    }
}
