#include <stdio.h>
#include <math.h>

int main()
{
  int radius;
  float area;

  radius = 4;

  area = radius * radius * M_PI;

  printf("The area of a circle with radius %d is approx. %f\n", radius, area);

}
