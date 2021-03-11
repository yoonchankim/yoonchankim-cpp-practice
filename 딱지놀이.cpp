#include <stdio.h>
int a;
int b;
int main(){
    int p;
    scanf("%d",&p);
    int a1=0,a2=0,a3=0,a4=0;
    int b1=0,b2=0,b3=0,b4=0;
    for(int i=0;i<p;i++){
        int A;
        int B;
        int a1=0,a2=0,a3=0,a4=0;
        int b1=0,b2=0,b3=0,b4=0;
        scanf("%d",&A);
        for(int j=0;j<A;j++){
            scanf("%d",&a);
            if(a==4){
                a4++;
            }
            if(a==3){
                a3++;
            }
            if(a==2){
                a2++;
            }
            if(a==1){
                a1++;
            }
        }
        scanf("%d",&B);
        for(int k=0;k<B;k++){
            scanf("%d",&b);
            if(b==4){
                b4++;
            }
            if(b==3){
                b3++;
            }
            if(b==2){
                b2++;
            }
            if(b==1){
                b1++;
            }
        }
        if(b4>a4){
            printf("B\n");
        }
        else if(a4>b4){
            printf("A\n");
        }
        else if(a3<b3){
            printf("B\n");
        }
        else if(a3>b3){
            printf("A\n");
        }
        else if(a2<b2){
            printf("B\n");
        }
        else if(a2>b2){
            printf("A\n");
        }
        else if(a1<b1){
            printf("B\n");
        }
        else if(a1>b1){
            printf("A\n");
        }
        else{
            printf("D\n");
        }
    }
}