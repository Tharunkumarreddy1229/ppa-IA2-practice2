#include <stdo.h>
void input(float *base,float *height)
{
  printf("enter base and height");
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area=(base*height) /2; }
  void output(float base, float heihjt, float area)
{
printf("the area of triangle with base %F and height %f is %F",base,height,area);
}
int main ()
{
  float base,height,area;
  input (&base,height);
  find_area(base,height,&area);
  output(base, height, area);
  return 0;
}