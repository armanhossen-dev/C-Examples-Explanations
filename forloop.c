//C program to print all even numbers from 1 to n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);    
    //for (initialization; condition; increment or decrement) {
        //code block to be executed
    //}
    for(int i = 1; i <= n; i++){
        if(i%2==0){ //condition to check if the number is even or not
            printf("%d ",i); //if condition true then it prints the number
        }
    }
    return 0;
}