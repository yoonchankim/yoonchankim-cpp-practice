#include <stdio.h>
 int main(){
     //¿Àºì½Ã°è ¼÷Á¦ÀÔ´Ï´Ù
    int h,m;
    int gm;
    int rh,rm;
    scanf("%d %d",&h,&m);
    scanf("%d",&gm);
    rm=(gm+60*h+m)%60;
    rh=(gm+60*h+m)/60;
    if(rm>59){
        rh +=1;
        rm -=60;
    }
    if(rh>23){
        rh -=24;
    }
    printf("%d %d",rh,rm);
 }
