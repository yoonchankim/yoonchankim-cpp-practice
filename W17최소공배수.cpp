#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int lcm(int a,int b){
    int max=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            if(max<i){
                max=i;
            }
        }
    }
    return (a/max)*(b/max)*max;
}
int main(){
    int a1,a2;
    scanf("%d %d",&a1,&a2);
    printf("%d",lcm(a1,a2));
}