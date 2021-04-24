#include <cstdio>
int main(){
    int n;
    long long int f[100];
    scanf("%d",&n);
    f[0]=4;
    f[1]=6;
    for(int i=2;i<n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    printf("%lld",f[n-1]);
}