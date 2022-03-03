#include <stdio.h>
#include <math.h>

int input()
{
  int n;
  printf("Enter a number: \t");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  if (n==0 || n==1) 
    return 0;
  
  if (n==2) 
    return 1;
  
  for(int i= 2; i<= sqrt(n);i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}

void output(int n, int isprime)
{
  if(isprime == 0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n);
}

int main()
{
  int n = input();
  int isprime = is_prime(n);
  output(n,isprime);
  return 0;
}