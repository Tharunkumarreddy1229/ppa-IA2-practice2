#include<stdio.h>
int input_side()
{
  int i;
  scanf("%d", &i);
  return i;
}
int check_scalene(int a,int b,int c)
{
  if(a==b&&a==c)
  return 0;
  else
  if(b==c)
  return 0;
  else
  return 1;
}
void output(int a,int b,int c, int isscalene)
{
  if(isscalene==1)
  printf("the triangle is scalene");
  else
  printf("the triangle is not scalene");
}
int main()
{
  float a,b,c,isscalene;
  printf("enter 3 numbers\n");
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
