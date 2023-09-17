#include <stdio.h>
/**
 * main - prints  first 98 Fibonacci numbers,starting with 1 and 2,in new line
 *          separated by comma and  space
 * Return:0 (success)
*/
int main(void)
{
        long int a = 1, b = 2, nxt = a + b;

        printf("%lu, ", a);
        printf("%lu, ", b);
        int i = 3;
        while( i <= 98)
        {

                if (i = 98)
                {
                        printf("%lu", nxt);
                }
                else
                {
                        printf("%lu, ", nxt);
                }
                a = b;
                b = nxt;
                nxt = a + b;
                i++;

        }
        printf("\n");

        return (0);
}
