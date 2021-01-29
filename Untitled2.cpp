#include <cstdio>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
    char str1[13];
    char str2[13];
    for(int i=0;i<13;i++){
        scanf("%c",&str1[i]);
        if('A'<=str1[i]<='Z'){
            str1[i]=str1[i]-55;
        }
    }
    for(int i=0;i<13;i++){
        scanf("%c",&str2[i]);
        if('A'<=str2[i]<='Z'){
            str2[i]=str2[i]-55;
        }
    }
    for(int i=0;i<13;)
}

