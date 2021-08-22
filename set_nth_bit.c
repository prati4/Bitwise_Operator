//Write a C program to set nth bit of a number.

#include <stdio.h>

int main()
{
    int num, n, new;

    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);
    new = num | (1<<n);
	printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, new);

    return 0;
}
