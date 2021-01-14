#include <stdio.h>
int main(){
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    sum=60*a+b;
    if(sum-45<0){
        printf("23 %d",15+b);
    }
    else{
        printf("%d %d",(sum-45)/60,(sum-45)%60);
    }
}
