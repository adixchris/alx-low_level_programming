 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 /**
  * main - Entry point
  *
  * Description: This assign a random number to n each time it is executed
  * this program prints "programing is positive, zero, or negative
  * Return: 0
  */
int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	else if (L == 0)
		printf("Last digit of %d is %d and is 0\n", n, L);
	else if (L < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);

	return (0);
}
