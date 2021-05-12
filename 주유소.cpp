#include <cstdio>
#include <algorithm>
using namespace std;
int p;
long long a[99999];
long long b[100000];
long long mik=0;
long long r=0;
int main(){
    scanf("%d",&p);
    for(int i=0;i<p-1;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<p;i++){
        scanf("%lld",&b[i]);
    }
    mik=b[0];
    for(int i=0;i<p;i++){
        mik=min(mik,b[i]);
        r=r+(mik*a[i]);
    }
    printf("%lld",r);
}
