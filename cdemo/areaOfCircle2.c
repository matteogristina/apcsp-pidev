#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius) 
{
  float area = (M_PI * radius * radius);
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float lower, upper;
  printf("Enter a small radius:\n");
  scanf("%f", &lower);
  printf("Enter a larger radius:\n");
  scanf("%f", &upper);
  for (float radius = lower; radius <= upper; radius++)
    {
	float solution = areaOfCircle(radius);
	printf("Area of circle when r = %f: %f\n", radius, solution);
    }
}
