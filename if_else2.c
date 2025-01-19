// C program to check whether a number is divisible by 5 and 11 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
    { // here the '%' modulus operator finds the remainder, if the number is divided by 5,11 then the reminder will be zero,
      // it will be printed when the condition is true
      //&& works for AND logic operator , when both condition is true then it make the condition true
        printf("Number is divisible by 5 and 11\n");
    }
    else
    { // else not
        printf("Number is not divisible by 5 and 11\n");
    }

    return 0;
}