#include <stdio.h>
#include <math.h>

int main()
{
  float radius;
  float area;

  radius = 4.5;
  for (int i = 0; i <9; i++)
  {
  area = radius * radius * M_PI;

  printf("The area of a circle with radius %F is approx. %f\n", radius, area);

  radius = radius + 1;
  }
}
