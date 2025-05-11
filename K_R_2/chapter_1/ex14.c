#include <stdio.h>

void main()
{
  float fahr , celsius;
  float lower, upper, step;

  lower = 0.0;
  upper = 100.0;
  step = 10.0;

  celsius = lower;
  printf("Celsius  Fahrenheint\n");
  while(celsius <= upper)
  {
    fahr = (9.0/5.0 * celsius) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

