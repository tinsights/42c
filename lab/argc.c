#include <stdio.h>

int main(int ac, char **av)
{
  printf("ac is %i\n", ac);
  if (ac == 2)
    printf("%i n", av[1][0]);
}