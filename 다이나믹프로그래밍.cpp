#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int a[41];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=40;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int b[41];
    for(int i=0;i<=40;i++){
        if(i==0){
            b[i]=1;
        }
        else{
            b[i]=a[i-1];
        }
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int k;
        scanf("%d",&k);
        printf("%d %d\n",b[k],a[k]);
    }
}
