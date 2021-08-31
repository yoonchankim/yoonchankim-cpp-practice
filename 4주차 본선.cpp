#include <cstdio>
#include <algorithm>
using namespace std;
int fuck(int x){//입력받은 숫자 3,6,9 포함된지 확인하는함수 있으면:1 앖으면:0
    while(x!= 0)
    {
        if(x%10==3||x%10==6||x%10==9){
            return 1;
            break;
        }
        x = x/10;

    }
    return 0;
}
int main(){
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%3==0||fuck(i)==1){//3의 배수거나 3,6,9가 포함되면 박수 친 개수 늘림
            sum++;
        }
    }
    sum=sum%20150523;//문제대로 나눔
    printf("%d",sum);
}
//아니 근데 왜 틀렸어요 코드좀 봐주세요
