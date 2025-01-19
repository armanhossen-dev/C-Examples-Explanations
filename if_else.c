// C program to find the maximum between two numbers
#include<stdio.h> 
int main(){ 
    int num1, num2; // declares two integer variables to store the input numbers
    printf("Enter two numbers: "); // display a message prompting the user to enter two numbers
    scanf("%d %d", &num1, &num2); // read two integers from the user and stores them in num1 and num2 respectively
    if(num1 > num2){ // checks if the value of num1 is greater than num2
        printf("%d is maximum\n", num1);       
    } else { 
        // executes if the above if condition is false
        printf("%d is maximum\n", num2); 
        // prints num2 as the maximum number
    }
    return 0; 
}
