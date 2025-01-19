//C program to find maximum between two numbers
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        printf("%d is maximum\n",num1);
    }else{
        printf("%d is maximum\n", num2);
    }

    return 0;
}