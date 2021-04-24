#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node)
{
    check[node] = true;
    printf("%d ",node);
    for (int i=0; i<a[node].size(); i++)
    {
        int next = a[node][i];
        if (check[next] == false)
        {
            dfs(next);
        }
    }
}
int main()
{
    int m,n;
    int a[2][1000];
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[0][i],&a[1][i]);
    }

    return 0;
}