#include <stdio.h>
 int main(){
     //�� ���ϱ� �����Դϴ�
    int n,m;
    int number;
    scanf("%d %d",&n,&m);
    scanf("%d",&number);
     if((n/m)*m<number){
        printf("0");
     }
     else{
        printf("%d",number%m);
     }
 }
