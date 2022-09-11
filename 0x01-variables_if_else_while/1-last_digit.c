 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 /**
  * main - Entry point
  *
  * Description: This program will assign a random number to the variable n each time it is executed
  * this program prints "programing is positive, zero, or negative
  * Return: 0
  */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n, l);
	else if (l < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);

	return (0);
}
