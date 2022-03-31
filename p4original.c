#include<stdio.h>
int input_array_size()
{
  int size;
  printf("enter the size of an array\n");
  scanf("%d",&size);
  return size;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("enter the %dth value\n",i);
        scanf("%d",&a[i]);
    }
}
int sum_composite(int n, int a[n])
{
  int sum;
  for(int i=0;i<n;i++)
    {
      if(n%i==0)
      {
        sum+=a[i];
      }
      return sum;
    }
}
void output(int sum)
{
printf("Sum of all composite numbers is %d",sum);
}

int main()
{
  int n;
 n=input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum=sum_composite(n,a);
  output(sum);
}