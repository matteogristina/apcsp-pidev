#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius) 
{
  float area = (M_PI * radius * radius);
  return area;
}

int main()
{
  float smaller, larger;
  printf("Enter a small radius:\n");
  scanf("%f", &smaller);
  printf("Enter a larger radius:\n");
  scanf("%f", &larger);
  for (float radius = smaller; radius <= larger; radius++)
    {
	float solution = areaOfCircle(radius);
	printf("Area of circle when r = %f is approx. %f\n", radius, solution);
    }
}
