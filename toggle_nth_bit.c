#include <stdio.h>

int main()
{
    int num, n, new;
	printf("Enter any number: ");
    scanf("%d", &num);
	printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);
    new= num^ (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, new);

    return 0;
}
