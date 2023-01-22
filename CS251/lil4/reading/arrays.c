#include <stdio.h>

int main ()
{
  int grades[5];
  int i;
  for (i=0; i<5; i++) {
    printf("grades[%d]=%d\n", i, grades[i]);
  }
  int hi[5] = {[0]=1, [2]=3, [4]=5};
  i = 0;
  for (i=0; i<5; i++) {
    printf("hi[%d]=%d\n", i, hi[i]);
  }
  return 0;
}