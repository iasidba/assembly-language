/* code about prompt to i/o string */
#include<stdio.h>

int main()
{
    int age = 10;
    char initial = 'A';
    float weight = 25.5;

    printf("age is \t %d\n",age);
    printf("initial is \t %c\n",initial);
    printf("weight is \t %f\n",weight);

    //or we can print everything on the same line

    printf("age=%d \t initial=%c \t weight=%f\n",age,initial,weight);

    return 0;
}
        
