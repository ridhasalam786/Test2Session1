#include <stdio.h>
#include <string.h>

void input_string(char *a,char *b)
{
  printf("Enter a string: \t");
  scanf("%s",a);
  printf("Enter the string to be searched: \t");
  scanf("%s",b);
}

int str_sub(char *a,char *b)
{
  int index=-1;
  int n=strlen(a);
  int m=strlen(b);
  for(int i=0;i<n;i++)
    {
     while(a[i]==b[m-1]) 
      if(a[i]==b[0])
      {
        index=i;
      }
      else
        continue;
      break;
    }
  return index;
}

void output(char *a,char *b,int index)
{
   if(index==-1)
    printf("No substring");
  else
    printf("The index of the substring %s in the string %s is %d",b,a,index);
 
}

int main()
{
  char s1[50],s2[50];
  int ind;
  input_string(s1,s2);
  ind=str_sub(s1,s2);
  output(s1,s2,ind);
  return 0;
}




