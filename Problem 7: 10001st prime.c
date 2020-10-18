#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
  int i;

  for (i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  int counter, num;
  counter = 0;
  num = 1;

  while (counter < 10001)
  {
    num += 1;
    if (is_prime(num) == 1)
    {
      counter += 1;
    }
  }

  printf("Ans: %i\n", num);

  return 0;
}