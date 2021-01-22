#include <cstdio>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int p;
    int sum=0;
    int cnt=0;
    char str[101];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%s",str);
        for(int j=0;j<strlen(str);j++){
            int length=strlen(str);
            if(str[i]==str[length-1-i]){
                sum++;
            }
            if(j==length-1&&sum==length){
                cnt++;
                sum=0;
            }

        }
    }
    printf("%d",cnt);
}
