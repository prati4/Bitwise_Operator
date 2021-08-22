//Write a C program to swap two numbers using bitwise operator.

#include <stdio.h>

int main()
{
    int a ;
    int b ;
    printf("Enter first value:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("value of a=%d b=%d before swapping\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of a=%d b=%d after swapping", a, b);

    return 0;
}
