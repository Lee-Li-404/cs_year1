#include <stdio.h>

int main ()
{
  int grades[2][2] = {1,2,3,4};
  int i,j;
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      printf("grades[%d][%d]=%d\n", i, j, grades[i][j]);
    }
  }
  return 0;
}