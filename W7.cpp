#include <stdio.h>
int main(){
    int n;
    char c[1001];
    scanf("%d",&n);
    scanf("%s",c);
    for(int i=0;c[i];i++){
        c[i];
        if(c[i]+n>90){
            while(c[i]+n<=90){
                c[i]=c[i]-26;
            }
        }
        else{
            c[i]=c[i]+n;
        }
        printf("%c",c[i]);
    }
}
