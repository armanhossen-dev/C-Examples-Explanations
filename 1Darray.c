#include<stdio.h>
int main(){
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10; i++){
       printf("%d ",num[i]);
    }
    printf("\n");
    //reverse
    for(int j = 9; j>=0; j--){
        printf("%d ",num[j]);
    }
    return 0;
}