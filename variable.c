#include<stdio.h> // includes the standard input-output library for functions like printf and scanf
int main(){ // The main function where the program execution starts
    int a, b; // a, b are integer variables
    int sum = 0; //sum is also integr variable with assign value zero
    printf("Enter two number to sum: ");
    scanf("%d%d",&a,&b); // scanf function to take input from output screen, %d for taking only integer value or part, and &a means address of a, the input will be assigned in the address of a
    sum = a+b; // integer value of  a & b and the summation is signed in the variable sum
    printf("Sum = %d\n",sum); //%d is the format specifier for displaying and retrieving integer variables
    return 0;    // Returns 0 to indicate that the program executed successfully
}