#include <stdio.h>
#include <math.h>

void input(float *x1,float *y1)
{
  printf ("Enter the x-coordinate: \t");
  scanf ("%f",x1);
  printf ("Enter the y-coordinate: \t");
  scanf ("%f",y1);
}

void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The x-coordinates are %f, %f. \n",x1,x2);
  printf("The y-coordinates are %f, %f. \n",y1,y2);
  printf("The distance between points (%f,%f) and (%f,%f) is %f \n",x1,y1,x2,y2,area);
}

int main()
{
  float x1,x2;
  float y1,y2;
  float area;
  input(&x1,&y1);
  input(&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}