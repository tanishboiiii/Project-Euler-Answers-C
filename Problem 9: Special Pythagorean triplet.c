#include <stdio.h>

int main()
{
  int a, b, c, sum;
  long long ans;

  sum = 1000;

  for (a = 1; a <= (sum / 3); a++)
  {
    for (b = 1; b <= (sum / 2); b++)
    {
      c = 1000 - a - b;
      if (a * a + b * b == c * c)
      {
        ans = a * b * c;
        printf("ANS: %llu\n", ans);
        return 0;
      }
    }
  }
}