#include <stdio.h>

#include <algorithm>

using namespace std;

int main()

{
    int a,b;
    int c=0;
    int d[100000];
    char f[100000];
    scanf("%d %d",&a,&b);
    scanf("%s",&f);


    for(int i=0; f[i]; i++){
        if(a%b==0){
            d[i]=(i/b)+((a/b)*(i%b));
        }
        else{
            d[i]=(i/b)+(((a/b)+1)*(i%b));
        }
    }
    for(int i=0;i<f[i];i++){
        d[i]=f[d[i]];
        printf("%c",d[i]);
    }
}
