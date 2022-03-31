#include<stdio.h>
int input()
{
  int a;
  printf("enter a value\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int gcd;
  for(int i=1; i<=a && i<=b; i++)
    {
      if(a%i==0 && b%i==0)
      {
         gcd=i;
      }
    }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,res;
  a=input();
  b=input();
  res=gcd(a,b);
  output(a,b,res);
  return 0;
}