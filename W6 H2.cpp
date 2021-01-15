#include <stdio.h>
int Collatz(int n) {
	if(n==1)return 0;
	if(n%2==0) return 1+Collatz(n/2);
	else return 1+Collatz(n*3+1);
}

int main() {
    //콜라츠추측
	int n;
	scanf("%d", &n);
	printf("%d",Collatz(n));
}