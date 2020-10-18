#include <stdio.h>

int isPalindrome(int num)
{
  int rev, remainder, numCpy;
  rev = 0;

  numCpy = num;

  while (numCpy != 0)
  {
    remainder = numCpy % 10;
    rev = rev * 10 + remainder;
    numCpy /= 10;
  }

  if (num == rev)
  {
    return 1;
  }

  return 0;
}

int main()
{
  int i, j, prod, max;
  max = 0;

  for (i = 1; i <= 999; i++)
  {
    for (j = 1; j <= 999; j++)
    {
      prod = i * j;
      if (isPalindrome(prod) == 1 && prod > max)
      {
        max = prod;
      }
    }
  }
  printf("ANS: %i\n", max);
}