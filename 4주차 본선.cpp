#include <cstdio>
#include <algorithm>
using namespace std;
int fuck(int x){//�Է¹��� ���� 3,6,9 ���Ե��� Ȯ���ϴ��Լ� ������:1 ������:0
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
        if(i%3==0||fuck(i)==1){//3�� ����ų� 3,6,9�� ���ԵǸ� �ڼ� ģ ���� �ø�
            sum++;
        }
    }
    sum=sum%20150523;//������� ����
    printf("%d",sum);
}
//�ƴ� �ٵ� �� Ʋ�Ⱦ�� �ڵ��� ���ּ���
