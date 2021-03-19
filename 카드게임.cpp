#include <cstdio>
#include <string>

int main()
{
    char p='D';
    int ra=0;
    int rb=0;
    int a[10];
    int b[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]>b[i]){
            ra=ra+3;
            p='A';
        }
        else if(a[i]<b[i]){
            rb=rb+3;
            p='B';
        }
        else{
            rb++;
            ra++;
        }
    }
    for(int i=0;i<10;i++){
        if(a[i]!=b[i]){
            break;
        }
        else if(i==9){
            p='D';
        }
    }
    printf("%d %d\n",ra,rb);
    if(ra<rb){
        printf("B");
    }

    else if(ra>rb){
        printf("A");
    }
    else
    {
        if(p=='D'){
            printf("D");
        }
        else{
            printf("%c",p);
        }
    }

}
