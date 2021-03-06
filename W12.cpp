#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int left,int right){
    return left>right;
}
int main(){
    int p=0;
    int sum=0;
    double data[101];
    double rData[101];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%lf",&data[i]);
        rData[i]=data[i];
    }
    sort(rData,rData+p);
    for(int i=0;i<p;i++){
        if(rData[i]!=data[i]){
            sum++;
        }
    }
    printf("%d",sum);
}