#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	// Get the last digit of n
	int last_digit = n % 10;

	// Print the last digit of n
	printf("Last digit of %d is %d %s\n", n, last_digit,
			(last_digit > 5) ? "and is greater than 5" :
			(last_digit == 0) ? "and is 0" : "and is less than 6 and not 0");

	return (0);
}
