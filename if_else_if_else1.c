/*
C program to check whether a number is positive, negative or zero
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    //if the condition is true then the statement inside if {} will be executed
    if(num > 0){ //if the number 2 is greater than zero, it is positive
        printf("Number %d is positive\n", num);
    }
    else if(num == 0){ //if the number equal to zero, it is zero
        printf("Number %d is zero\n", num);
    }else{     
        printf("Number %d is negative\n", num); 
    }
    return 0;
}