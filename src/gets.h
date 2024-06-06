#include <stdio.h>

int get_int(char *msg)
{
  int i;
  printf("%s", msg);
  scanf("%i", &i);
  return i;
}

// ! Does not work
// char *get_string(char *msg)
// {
//   char *s;
//   printf("%s", msg);
//   scanf("%s", s);
//   return s;
// }
