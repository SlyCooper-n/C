#include <stdio.h>
#include "gets.h"

int main(void)
{
  int size = get_int("Mario stairs size: ");

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