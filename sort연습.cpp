#include <iostream>
#include <algorithm>
using namespace std;
bool dest(int a,int b){
    return a>b;
}
int main(){
    int a[4]={5,1,3,4};
    sort(a,a+4,dest);
    for(int i=0;i<4;i++){
        printf("%d",a[i]);
    }
}
