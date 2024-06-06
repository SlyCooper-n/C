#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *tmp = malloc(1);
  printf("%i", *tmp);
  free(tmp);
}