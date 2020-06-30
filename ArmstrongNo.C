#include<stdio.h>
#include<conio.h>
  
  void main ()
{
  int n,a,rem,sum;
  clrscr();
  printf("Enter an int:");
  scanf("%d",&n);
  a=n;
  
 for(sum=0;n>0;n=n/10)
{
  rem = n%10;
  sum = sum+rem*rem*rem;
}

  if(sum==a)
  printf("Armstrong Number");
  else
  printf("Not Armstrong Number");

  getch();
}