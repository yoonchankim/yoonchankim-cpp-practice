#include <cstdio>
#include <vector>
using namespace std;
int main(){
    int sectioncnt;
    int section[100001];
    int result=0;
    int cnt=0;
    scanf("%d",&sectioncnt);
    for(int i=0;i<sectioncnt;i++){
        scanf("%d",&section[i]);
        if(i!=0){
            if(section[i]>section[i-1]){
                if(result<section[i]-section[i-1]){
                    result=section[i]-section[i-1];
                    cnt=i;
                }
            }
        }
    }
    if(cnt==0){
        printf("0");
    }
    if(cnt!=0){
       printf("%d %d",cnt,cnt+1);
    }

}
