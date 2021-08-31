#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
bool c[100001];
int bfs(int n,int m){
    int time=0;
    queue <int> q;
    q.push(n);
    while(1){
        int size=q.size();
        for(int i=0;i<size;i++){
            n=q.front();
            q.pop();
            if(n==m){
                return time;
            }
            if(n>0&&c[n-1]==0){
                c[n-1]=1;
                q.push(n-1);
            }
            if(n<100000&&c[n+1]==0){
                c[n+1]=1;
                q.push(n+1);
            }

            if(n<=50000&&c[n*2]==0){
                c[n*2]=1;
                q.push(n*2);
            }
        }
        time++;
    }
}
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    printf("%d",bfs(N,M));
}
