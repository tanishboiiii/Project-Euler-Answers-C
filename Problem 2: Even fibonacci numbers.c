#include <stdio.h>

int main()
{
  int num0, num1;
  long ans, sum = 0;
  num0 = 0;
  num1 = 1;
  ans = 0;

  do
  {
    ans = num0 + num1;
    num0 = num1;
    num1 = ans;

    if (ans % 2 == 0)
    {
      sum += ans;
    }
  } while (ans < 4000000);

  printf("ans is %lu \n", sum);

  return 0;
}