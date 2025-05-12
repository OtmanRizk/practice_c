# include <stdio.h>

void main()
{
  int c;
  c = getchar();

  printf("%d",c);
  putchar(c);
  
  printf("\n");
  printf("%d",EOF);
  printf("\n");
  while((c = getchar()) != EOF)
  {
    printf("\n");
    putchar(c);
  }
}
