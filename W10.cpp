#include <stdio.h>
#include <string.h>
#include <string>
struct student{
    int id;
    char name[20];
    int y;
    int z;
};
int main(){
    int n,p;
    student a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&a[i].id,a[i].name,&a[i].y,&a[i].z);;
    }
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        char nam[20];
        gets(nam);
        for(int j=0;j<n;j++){
            if(strcmp(nam,a[j].name)==0){
                printf("%d %d %d\n",a[j].id,a[i].y,a[i].z);
            }
        }
    }
    return 0;
}
