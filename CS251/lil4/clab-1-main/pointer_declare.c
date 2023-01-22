#include <stdio.h>

int main (int argc, char *argv[])
{
  int age = 30;
  int *p;
  p = &age;
  printf("age=%d\n", age);
  printf("p=%p\n", p);
  printf("*p=%d\n", *p);
  printf("sizeof(p)=%ld\n", sizeof(p));
  *p = 40;
  printf("*p=%d\n", *p);
  printf("age=%d\n", age);
  return 0;
}