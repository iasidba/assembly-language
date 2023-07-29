#include <stdio.h>
/**
 * main - prints num in reverse order
 *
 */
int main(void)
{
	int num, revnum;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Numbers in reverse order from %d to 1:\n", num);

	for(revnum = num; revnum >= 1; revnum--)
	{
		printf("%d", revnum);
	}
	printf("\n");
	return 0;
}
