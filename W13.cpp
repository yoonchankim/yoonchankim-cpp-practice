#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<3;i++){
        arr[i]=i;
    }
    do{
        for(int i=0;i<3;i++)
            printf("%d",arr[i]);
            printf("\n");
    }while(next_permutation(arr,arr+3));
    return 0;
}
