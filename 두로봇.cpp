#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int,int>> edge[100001];
int check[100001];
int max_dist[100001];
int N,start,goal;
int main(){
    int s,e,d;
    scanf("%d%d%d",&N,&start,&goal);
    for(int i=1;i<N;i++){
        scanf("%d%d%d",&s,&e,&d);
        edge[s].push_back({e,d});
        edge[e].push_back({s,d});
    }
    queue<pair<int,int>> q;
    q.push({start,0});
    check[start]=1;
    while(!q.empty())
    {   
        int now =q.front().first;
        int dist =q.front().second;
        q.pop();
        for(int i=0;i<edge[now].size();i++){
            int next =edge[now][i].first;
            int next_dist=edge[now][i].second;
            if(!check[next]){
                max_dist[next]=max(max_dist[now],next_dist);
                q.push({next,dist+next_dist});
                check[next]=1;
            }
        }
        if(now==goal){
            printf("%d",dist-max_dist[now]);
            return 0;
        }
    }
    return 0;
}
