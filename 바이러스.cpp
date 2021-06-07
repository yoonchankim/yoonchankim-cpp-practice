#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
int sum=0;
vector <int> a[1001]; //정점 개수 만큼 벡터로 2차원 배열 생성 -> 1001개의 열을 생성 scanf() 로 행을 채운다.
bool check[1001]; //해당 노드 방문했는 지 체크, 갔으면 true, 안 갔으면 false

void dfs(int node){
    sum++;
     //dfs 만들기 , node -> 어떤 정점에서 시작할지
    check[node] = true; // 방문한 node는 true
    for(int i=0; i<a[node].size(); i++){ //전체 노드 개수만큼 실행
        int next = a[node][i]; //다음 갈 곳은 a[node][i] 번째, i=0이면, 1->2 이므로, next = 2;
        if(check[next] == false) //안 간곳이라면,
            dfs(next);           // 쭉 따라서 가자
    }
}
int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    printf("%d",sum-1);
}