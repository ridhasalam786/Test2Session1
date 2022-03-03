
#include <stdio.h>
#include <math.h>

int input_array_size()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}

void erotosthenes_sieve(int n, int a[n])
{
  int i=0;
  while(i<sqrt(n))
  {
   for(;a[i]==0 ;i++);
   for(int k=i+i;k<n;k += i)
     a[i] = 0;
   i++;
  }
}


void output(int n, int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}