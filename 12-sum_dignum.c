#include <stdio.h>
/**
 *programs to sum digit of numbers
 *
 *Return: 0 success
 */
int main(void)
{
	int num, temp;
	AGAIN:
	printf("Enter a Positive Number: ");
	scanf("%d", &num);
	int sum = 0;

	if(num > 0)
	{
		temp = num;
		while(temp > 0)
		{
			sum = sum + temp % 10;
			temp = temp / 10;
		}
	}
	else
	{
        printf("ERROR:pls Enter a positive number:\n");
       goto AGAIN;
	}
	printf("Sum of digits of %d is :%d\n", num, sum);
	return 0;
}

