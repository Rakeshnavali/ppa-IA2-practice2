#include<stdio.h>
void input_string(char a[10])
{
  printf("enter the charecter\n");
  scanf("%s",a);
}
char str_reverse(char a[10])
{
  int i, n=0;
  char r;
  for(i=0;i<a[n]!='\0';i++)
    {
      printf("the length of string is %d\n",n);
    }
  for(i=0;i<((n/2)-1);i++)
  {
    r=a[i];
    a[i]=((a[i]-1)/2);
    ((a[i]-1)/2)=r;
    return r;
  }
}
void output(char a,char *a)
{
  printf("the reverse string is %s",a);
}
int main()
{
 char a,r;
  a=input_string();
  r=str_reverse(a);
  output(a,*r);
  return 0;
}