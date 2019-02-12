#include <stdio.h>

/*fdsf
 * som other commentds*/
int fahr2celsius();

int main()
{
  int fahr, celsius;
  int lower, upper, step;
  step = 20;
  lower = 0;
  upper = 300;

  fahr = lower;
  while (fahr <= upper) {
    celsius = fahr2celsius(fahr);
    printf("%3d%6d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

int fahr2celsius(int fahr)
{
  return (5.0/9.0) * (fahr - 32);
}

