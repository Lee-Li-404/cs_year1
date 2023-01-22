#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  if (argc < 2) {
    printf("please provide an integer argument\n");
    return 1;
  }
  else {
    int n = atoi(*(argv+1));
    printf("%d",n);
    int grades[n];
    int i;
    for (i=0; i<n; i++) {
      grades[i] = i;
    }
    for (i=0; i<n; i++) {
      printf("grades[%d]=%d\n", i, grades[i]);
    }
    return 0;
  }
}