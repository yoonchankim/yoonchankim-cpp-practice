#include <stdio.h>
int num(int x);
int main(){
    //자릿수의합
    int a,result;
    scanf("%d",&a);
    result=num(a);
    printf("%d",result);
}
int num(int x)
{
    if(x==(x%10)){
        return x;
    }
    return x%10+num(x/10);
}