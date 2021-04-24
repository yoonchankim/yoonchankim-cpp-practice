#include <iostream>
using namespace std;
 int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
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