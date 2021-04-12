#include <iostream>
#include <cmath> 
#include <algorithm>
using namespace std; 

int main(){
    int p; 
    int r;
    int k;
    int sum=0;
    int sum2=0;
    int a[10000]={0,};
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    scanf("%d",&r);
    sort(a,a+p);
    if(sum<r){
        printf("%d",a[p-1]);
    }
    else{
        for(int i=0;i<p;i++){
            if(a[i]*p>r){
                k=i;
                break;
            }
        }
        for(int j=k;j<p;j++){
            sum2=sum2+a[j];
        }
        printf("%d",(int)((r-(sum-sum2))/(p-k)));
    }
}