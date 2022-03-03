#include <stdio.h>
#include <math.h>

void input_line(float *x1,float *y1)
{
  printf ("Enter the x-coordinate: \t");
  scanf ("%f",x1);
  printf ("Enter the y-coordinate: \t");
  scanf ("%f",y1);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float s1,s2,s3;
  int istriangle;
  s1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  s2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  s3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    istriangle=1;
  else
    istriangle=0;
  return istriangle;
}

void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  printf("The x-coordinates are %f, %f,%f. \n",x1,x2,x3);
  printf("The y-coordinates are %f, %f,%f. \n",y1,y2,y3);
  if(istriangle==1)
    printf("The points (%f,%f),(%f,%f) & (%f,%f) form a triangle.",x1,y1,x2,y2,x3,y3);
  else
    printf("The points (%f,%f),(%f,%f) & (%f,%f) do not form a triangle.",x1,y1,x2,y2,x3,y3);
}

int main()
{
  float x1,x2,x3;
  float y1,y2,y3;
  int istriangle;;
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3); 
istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}