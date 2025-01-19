/*C program to find sum of natural numbers from 1 to n*/
//Natural numbers are the set of positive integers
#include<stdio.h>
int main(){
    int num;
    printf("Input upper limit: ");
    scanf("%d",&num);
    //to find sum of natural numbers
    int i, sum = 0; // 'i' is for the while loop, and 'sum' will store the total. Start 'sum' at 0 to avoid any random values.
    i = 1; // as the natural number starts from 1;
    while(i<=num){
        sum+=i; //while loop condition is ture then i's value will added with sum variable
        i++; //each time the loop goes the value of i will increase by 1
    }
    printf("Sum of natural numbers 1 to %d: %d\n",num, sum);
}
