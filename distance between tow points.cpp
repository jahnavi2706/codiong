#include<stdio.h>
int main()
{
  float x1,x2,y1,y2,distance;
  printf("enter first point coordinates:");
  scanf("%f%f",&x1,&y1);
  printf("enter second point coordinates:");
  scanf("%f%f",&x2,&y2);
  distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  printf("distance between two points is %f%f%f%f%f",sqrt(distance));
  
  return o;
}

