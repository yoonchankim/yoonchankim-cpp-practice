#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int p;
    int r;
    int j=0;
    int k;
    int rr;
    int mak;
    int sum=0;
    int sum2=0;
    int a[100000];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    scanf("%d",&r);
    if(r<sum){
        k=r/p;
        for(int i=0;i<p;i++){
            if(a[i]<=k){
                sum2=sum2+a[i];
                j++;
            }
        }
        rr=(r-sum2)/(p-j);
        printf("%d",rr);
    }
    else{
        mak=a[0];
        for(int i=0;i<p;i++){
            mak=max(mak,a[i]);
        }
        printf("%d",mak);
    }
}
