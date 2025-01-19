// C program to print all even numbers from 1 to n
#include <stdio.h>
int main()
{
    int n;
    printf("Input upper range: ");
    scanf("%d", &n);
    // for (initialization; condition; increment or decrement) {
    // code block to be executed
    //}
    printf("Even numbers between 1 to %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {                    // condition to check if the number is even or not
            printf("%d", i); // if condition true then it prints the number

            if (i != n && i > 1)
            { // after the number print when it is not the last or first number
              // this will print ','
                printf(", ");
            }
        }
    }
    return 0;
}