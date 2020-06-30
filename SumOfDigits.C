#include<stdio.h>
#include<conio.h>
  
  void main ()
{
  int n,rem,sum;
  clrscr();
  printf("Enter an int:");
  scanf("%d",&n);
  
 for(sum=0;n>0;n=n/10)
{
  rem = n%10;
  sum = sum+n;
  n = n/10;
}
  printf("\n Sum of digits = %d",sum);
  getch();
}