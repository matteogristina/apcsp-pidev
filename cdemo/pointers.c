#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  
  float d = 0.203;
  float e = 1.13;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  printf("d: %f has addr: %d\n", d, &d);
  printf("e: %f has addr: %d\n", e, &e);
  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;
  printf("new d = %f\n", d);
  printf("new e = %f\n", e);
}

