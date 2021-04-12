#include <cstdio>
bool prime(int n){
    int k=0;
    for(int i=2;i<n;i++){
       if(n%i==0){
            k=1;
            return false;
        }
    }
    if(k==0){
            return true;
    }
}
int main(){
    int p;
    scanf("%d",&p);
    if(prime(p)){
        printf("true");
    }
    else{
        printf("false");
    }
}
