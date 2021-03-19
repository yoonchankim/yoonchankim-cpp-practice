#include <stdio.h>
int main(){
    int p;
    int sum=0;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        int a1=0,a2=0;
        scanf("%d %d",&a1,&a2);
        sum=sum+(a2%a1);
    }
    printf("%d",sum);
}