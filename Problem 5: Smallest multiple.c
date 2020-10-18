#include <stdio.h>

int is_div(int num)
{
  int i;

  for (i = 1; i <= 20; i++)
  {
    if (num % i != 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{

  int number;

  number = 1;

  do
  {
    number += 1;
  } while (is_div(number) == 0);

  printf("Number is: %i \n", number);

  return 0;
}