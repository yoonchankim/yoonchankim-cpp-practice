#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int gcd(int a,int b){
    int max=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            if(max<i){
                max=i;
            }
        }
    }
    return max;
}
int main(){
    int a1,a2;
    scanf("%d %d",&a1,&a2);
    printf("%d",gcd(a1,a2));
}