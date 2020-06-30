#include<stdio.h>
#include<conio.h>
  
  void main ()
{
  int i;
  clrscr();
  i=1;
  
  while(i<=20)
{
  if(i%2==0)
  printf("\n %d",i);
  i=i+1;
}

  getch();
}