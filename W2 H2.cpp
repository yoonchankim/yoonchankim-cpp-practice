#include <stdio.h>

int main(){
    int m,n,f;
    int d=0;//ù��° �Ҽ��� �������� �˷��� ������ ����,ù��° �Ҽ����� f=1�� �Ÿ� ���� �Ҽ��� ���ö� f=f+1�� �迭�� ��´�
    int a[10001];//����迭
    scanf("%d %d",&m,&n);
    for(int i=1;i<m+1;i++){
        if(d==0){
            if(m%i==0){
                d=d+1;
                f=1;
                a[f-1]=i;
            }
        }
        else if(m%i==0){
              f=f+1;
              a[f-1]=i;
        }
    }
    if(f>=n){
       printf("%d",a[n-1]);
    }
    else if(f<n){
        printf("0");
    }
}
