#include <stdio.h>

int main(void)
{
  int size;

  printf("Mario stairs size: ");
  scanf("%i", &size);

  printf("\n");

  for (int i = 1; i <= size; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("#");
    }

    printf("\n");
  }
}