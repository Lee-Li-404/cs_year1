#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *vec;
  vec = malloc(sizeof(int) * 3);
  vec[0] = 1;
  vec[1] = 2;
  vec[2] = 3;
  printf("vec[2]=%d\n", vec[2]);
  printf("vec[2]=%d\n", *(vec+2));

  free(vec);
  return 0;
}