// C program to find sum of odd numbers from 1 to n
#include <stdio.h>
int main()
{
    int num, i = 0, sum = 0;
    printf("Input upper limit: ");
    scanf("%d", &num); // limit assigned in num
    do
    {
        if (i % 2 != 0) // If the number is odd, then when you divide it by 2, the remainder will not be zero
        {
            sum += i;
        }
        i++;
    } while (i <= num);
    printf("Sum of odd numbers from 1-%d: %d\n", num, sum);
    return 0;
}