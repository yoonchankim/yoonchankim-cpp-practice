#include <stdio.h>

int main()
{
    int A[11];
    int B;
    int a=0;
    int b=0;
    for(int i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(int j=0;j<10;j++){
        scanf("%d",&B);
        if(B<A[j]){
            a++;
        }
        else if(B>A[j]){
            b++;
        }
    }
    if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    else{
        printf("D");
    }
}
