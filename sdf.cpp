#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> a[1001];
bool c[1001];
void bfs(int first){
    queue <int> q;
    c[start]=true;
    q.push(start);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        printf("%d",node);
        for(int i=0;i<a[node].size();i++){
            int next=a[node][i];
            if(c[next]==false){
                c[next]==true;
                q.push(next);
            }
        }
    }
}
int main(){
    int n,m,start;
    scanf("%d %d %d",&n,&m,&start);
    for(int i=0;i<m;i++){
        int u,v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(a[i].begin,a[i].end);
    }
    bfs(start);
}

