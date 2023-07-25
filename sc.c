#include<stdio.h>

int main()
{
   printf("sizeof(int)    = %ld\n",sizeof(int));
    printf("sizeof(char)   = %ld\n",sizeof(char));
    printf("sizeof(float)  = %ld\n",sizeof(float));
    printf("sizeof(double) = %ld\n",sizeof(double));

    char c;
    double d;

    printf("sizeof variable c = %ld\n",sizeof(c));
    printf("sizeof variable d = %ld\n",sizeof(d));
    /*10 is an int value and it will take 4 bytes */
    printf("sizeof(10)        = %ld\n",sizeof(10));


    return 0;
}

