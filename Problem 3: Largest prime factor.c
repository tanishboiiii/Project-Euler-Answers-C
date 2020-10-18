#include <stdio.h>
#include <math.h>

int is_prime(num)
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
  long num;
  int divisor;

  num = 600851475143;
  divisor = 2;

  while (num != 1)
  {
    if (num % divisor == 0)
    {
      num = num / divisor;
    }

    else
    {
      divisor += 1;
      while (is_prime(divisor) == 0)
      {
        divisor += 1;
      }
    }
  }

  printf("The largest prime factor is %i \n", divisor);

  return 0;
}