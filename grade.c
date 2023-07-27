#include <stdio.h>
/**
 *main - prints grade for num >= 80 A, num >= 60 B, num >= 40 C,
 * num < 40 fail.
 * Return 0 always success.
 */
int main(void)
{
    int num;
    printf("Enter student marks: ");
    scanf("%d",&num);
    
    // Calculate the grades using the if..else ladder
    if(num >= 80)
    {
        printf("You got A grade \n");
    }
    else if ( num >=60) 
    {
        printf("You got B grade \n");
    }
    else if ( num >=40) 
    {
        printf("You got C grade \n");
    }
    else if ( num < 40)
    {
        printf("You Failed in this exam \n");
        printf("Better Luck Next Time \n");
    }
    return 0;
}
