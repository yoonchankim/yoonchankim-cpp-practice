#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int pact(int n){
    int sum=1;
    for(int i=1;i<n+1;i++){
        sum=sum*i;
    }
    printf("%d",sum);
}
int main(){
    int p;
    scanf("%d",&p);
    pact(p);
}