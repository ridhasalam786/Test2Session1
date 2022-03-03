#include <stdio.h>

int input()
{
  int n;
  printf("Enter value of n: \t");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  printf("Fibonacci series: \n");
  int fibo;
  int n1=0;
  int n2=1;
  if (n==1)
    return n1;
  else if (n==2)
    return n2;
  else
    for(int i=0;i<n;i++)
      {
        printf("%d \t",n1);
        fibo=n1+n2;
        n1=n2;
        n2=fibo;
      }
  return fibo;
}

void output(int n,int fibo)
{
  printf("%d \t",fibo);
}

int main()
{
  int x,f;
  x=input();
  f=find_fibo(x);
  output(x,f);
  return 0;
}