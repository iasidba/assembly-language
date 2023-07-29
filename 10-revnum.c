#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int num, revnum = 0, rem;

	printf("Enter a number: ");
	scanf("%d", &num);

	while(num != 0)
	{
		rem = num % 10;
		revnum = (revnum * 10) + rem;
		num = num / 10;
	}

	printf("Reversed number: %d\n" , revnum);
	return 0;
}
