#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
<<<<<<< HEAD
 *main - Prints the last digit of random number
 *
 *Return: Return 0
 */
int main(void)
{
  int n;
  int last;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last = n % 10;

  if (last == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, last);
    }
  else
    {
      if (last > 5)
	{
	  printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
      else if (last < 6)
	{
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
=======
*main - Prints the last digit of random number
*
*Return: Return 0
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
>>>>>>> 375f6f542d8017af19e98a33a90b2bbf6e60170d
	}
	return (0);
}
