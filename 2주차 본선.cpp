#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t[6];
    int sum=0;
    for(int i=0;i<6;i++){
            scanf("%d",&t[i]);
    }
    for(int i=5;i>=0;i--){
        sum=sum+((i+1)*(i+1)*t[i]);
    }
    int r=sum%36;
    if(r==0){
        printf("%d",sum/36);
    }
    else{
        printf("%d",(sum/36)+1);
    }
}
