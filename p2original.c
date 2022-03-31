#include<stdio.h>
int input_side()
{
  int side;
  printf("enter the side of an triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && c!=a)
  {
    return 1;
  }
  return 0;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
  {
    printf("thr triangle is scalene with sides %d %d %d\n",a,b,c);
  }
  else
  {
    printf("triangle is not scalene with sides %d %d %d\n",a,b,c);
  }
}
int main()
{
  int a,b,c,res;
  a=input_side();
  b=input_side();
  c=input_side();
  res=check_scalene(a,b,c);
  output(a,b,c,res);
}