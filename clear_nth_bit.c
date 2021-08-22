//Write a C program to clear nth bit of a number

#include <stdio.h>

int main()
{
    int num, n, new;
	printf("Enter any number: ");
    scanf("%d", &num);
	printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);
    new = num & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, new);

    return 0;
}
