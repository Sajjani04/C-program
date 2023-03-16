#include<stdio.h>
#include<string.h>
void input_string(char *string);
void capitalize(char *string);
void output(char *string);
int main()
{
  char string[100];
  input_string(string);
  capitalize(string);
  output(string);
}
void input_string(char *string)
{
  printf("enter the string:");
  scanf("%s",string);
}
void capitalize(char *string)
{
  int i;
  for(i=0;i<string[i]!='\0';i++)
    {
      if(string[i]=='.' && string[i+1]>='a' && string[i+1]<='z')
      {
        string[i+1]=string[i+1]-32;
      }
    }
  }

  void output(char *string)
{
  printf("%s",string);
}