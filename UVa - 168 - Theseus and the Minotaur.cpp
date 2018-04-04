#include<bits/stdc++.h>
#define i64 long long

using namespace std;

string str;
vector<int>graph[10005];
bool visited[10005];

void init()
{
    for(int i=0; i<10000; i++){
        visited[i] = false;
        graph[i].clear();
    }
}

int main()
{
    while(getline(cin, str) && str!="#"){
        init();
        int len = str.size();
        char u = '$', v;
        char M = '$', T = '$'; int k = 0;
        bool flag = false, dtfn = false;
        for(int i=0; i<len; i++){
            if(str[i]=='.') { dtfn = true; continue; }
            if(!dtfn){
                if(isalpha(str[i])){
                    if(!flag){
                        u = str[i];
                    }
                    else{
                        graph[u].push_back(str[i]);
                    }
                }
                else if(str[i]==':'){
                    flag = true;
                }
                else if(str[i]==';'){
                    u = '$', flag = false;
                }
            }
            else{
                if(isalnum(str[i])){
                    if(M=='$'){
                        M = str[i];
                    }
                    else if(T=='$'){
                        T = str[i];
                    }
                    else{
                        k = k*10 + (str[i]-'0');
                    }
                }
            }
        }

        int cnt = 0;

        while(true){
            int P = M;
            for(int i=0; i<graph[M].size(); i++){
                int v = graph[M][i];
                if(!visited[v] && v!=T){
                    M = v; break;
                }
            }
            T = P;
            if(T==M) break;
            cnt++;
            if(cnt==k){
                visited[T] = true;
                cnt = 0;
                printf("%c ", T);
            }
        }

        printf("/%c\n", M);

    }
}
