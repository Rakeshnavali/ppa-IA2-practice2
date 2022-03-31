#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        return 1;
      }
      return 0;
     
    }
}
void output(int n, int composite)
{

  if(composite==1)
  {
    printf("the number %d is composite\n",n);
  }
  else
  {
    printf("the number %d not is composite\n",n);
  }
    
}
int main()
{
  int n,res;
  n=input_number();
  res= is_composite(n);
  output(n,res);
  return 0;
}