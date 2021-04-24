#include <iostream>
using namespace std;
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
int main() {
	int a, b; 
	int x; 
	long long int res1 = 1, res2 = 1; 
 
	cin >> a >> b;
 
	b = b / a; 
 	for (int i = 1; i * i <= b; i++) {
		if (b % i == 0 && gcd(i, b / i) == 1) {                            
			x = i;
		}
	}
	res1 = a * x;
	res2 = a * (b / x);
 
	cout << res1 << ' ' << res2;
}