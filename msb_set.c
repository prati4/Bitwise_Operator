#include <stdio.h>
#define BITS sizeof(int) * 8     //give total number of bits

int main()
{
    int n, msb;
	printf("Enter any number: ");
    scanf("%d", &n);
    msb = 1 << (BITS - 1);
    
    if(n & msb)
        printf("MSB of %d is set.", n);
    else
        printf("MSB of %d is unset.", n);

    return 0;
}
