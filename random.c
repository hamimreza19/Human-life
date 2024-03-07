#include <stdio.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));

  int random_number = rand() % 20 + 1;

  printf("Random number: %d\n", random_number);

  return 0;
}

