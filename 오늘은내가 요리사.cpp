#include <cstdio>
int dol(int a){
    int b=0;
    while(a){
        b=b+a%10;
        a=a/10;
    }
    return b;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n<10){
        n=dol(n);
        sum++;
    }
    printf("%d",sum);
}

