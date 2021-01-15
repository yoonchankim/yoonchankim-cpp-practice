#include <stdio.h>
void hanoi(int n,int form,int to){
    if(n==0)return;
    hanoi(n-1,form,6-form-to);
    printf("%d %d %d\n",n,form,to);
    hanoi(n-1,6-form-to,to);
}
int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,1,3);
    return 0;
}