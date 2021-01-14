#include <cstdio>
int cal(int a);
int main(){
    int n,sum=0;
    int num[20]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum=sum+cal(num[i]);
    }
    printf("%d",sum);
}
int cal(int a){
    if(a>(a*(a-40)+300)){
        return a;
    }
    else{
        return (a*(a-40)+300);
    }
}

