#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: prints whether the numebr stored in the variable n is positive or negativ
 * Return: 0
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n" , n);
else if (n==0)
	print("%d is zero\n" , n);		
else if (n<0)
	print)("%d is negative\n" , n);
	return 0;
}
