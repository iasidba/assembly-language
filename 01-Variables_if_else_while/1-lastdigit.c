#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digits of numbers
 * Return:Always 0(success)
*/
int main(void)
{
    int n , lastD;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /*your code goes there */
    lastD = n % 10;

    if (lastD > 5)
    {
        printf("last digit of %d is %d and is greater than 5\n" , n , lastD);
    }
    else if (lastD < 6 && lastD != 0)
    {
       printf("last digit of %d is %d and is less than 6 and not 0\n" , n , lastD);
    }
    else 
    {
        printf("last digit of %d is %d and 0\n" , n , lastD);
    }
    return (0);
}
