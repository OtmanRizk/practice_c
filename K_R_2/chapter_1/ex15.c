#include <stdio.h>

// Constant
#define LOWER 300
#define UPPER 0 
#define STEP 20

void main()
{
  int celsius;

  for(celsius = LOWER; celsius >= UPPER; celsius = celsius - STEP)
      printf("%3d %6.1f\n",celsius ,(celsius * 9.0/5.0) + 32);
}
