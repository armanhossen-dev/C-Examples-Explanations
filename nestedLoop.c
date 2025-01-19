//print star triangle
#include<stdio.h>
int main(){
    int num;
    printf("Enter row = column =  ");
    scanf("%d",&num);
    //for loop inside for loop 
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}