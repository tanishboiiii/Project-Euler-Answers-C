#include <stdio.h>

int main()
{
  int sumSqr, sqrSum, i;
  sumSqr = 0;
  sqrSum = 0;

  for (i = 1; i <= 100; i++)
  {
    sumSqr += i;
    sqrSum += i * i;
  }

  sumSqr = sumSqr * sumSqr;

  printf("Ans: %i \n", sumSqr - sqrSum);

  return 0;
}