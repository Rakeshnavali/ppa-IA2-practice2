#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}
typedef struct _triangle triangle()

triangle input_triangle()
{
  triangle a;
  printf("enter the base & altitude of triangles\n");
  scanf("%f %f",a.base,a.altitude);
  return a;
}
void find_area(triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(triangle t)
{
  printf("the area of an triangle with base=%d and height=%d is:%d\n",t.base,t.altitude,t.area);
}
int main()
{
  triangle t,area;
  t=input_triangle();
  area=find_area(&t);
  output(t);
  return t;
}