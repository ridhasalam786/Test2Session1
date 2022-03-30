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
  int index;
  int n=strlen(a);
  for(int i=0;i<n;i++)
    {
      if(a[i]==b[0])
        index=i;
      else
        continue;
      break;
    }
  return index;
}

int str_2_sub(char *a,char *b,int index)
{
  int index_2=-1;
  int n=strlen(a);
  int j=index+1;
  for(int j;j<n;j++)
    {
      if(a[j]==b[0])
        index_2=j;
      else
        continue;
      break;
    }
  return index_2;
}


void output(char *a,char *b,int index ,int index_2 )
{
  if(index!=-1)
    printf("The index of the substring %s in the string %s is %d",b,a,index);
  if(index_2!=-1)
  {
    printf("The second index of the substring %s in the string %s is %d",b,a,index_2);
  }
  else
     printf("No second substring present"); 

  
}

int main()
{
  char s1[50],s2[50];
  int ind,ind_2;
  input_string(s1,s2);
  ind=str_sub(s1,s2);
  ind_2=str_2_sub(s1,s2,ind); 
  output(s1,s2,ind ,ind_2 );
  return 0;
}