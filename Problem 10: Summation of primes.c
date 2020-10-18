#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
  int i, limit;

  limit = sqrt(n);

  for (i = 2; i <= limit; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int num;
  long long upperBound, sum;

  num = 2;
  sum = 0;
  upperBound = 2000000;

  while (num < upperBound)
  {
    if (isPrime(num) == 1)
    {
      sum += num;
    }

    num += 1;
  }

  printf("ANS: %llu\n", sum);

  return 0;
}