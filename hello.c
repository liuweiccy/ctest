#include<stdio.h>

int main()
{
  char name[20];
  char ch[20];

  printf("hello world!");
  printf("what's your name?");
  name = gets(ch);
  printf("\nMy name is:");
  puts(name);
  return 0;
}
