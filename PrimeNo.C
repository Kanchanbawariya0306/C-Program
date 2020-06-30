#include<stdio.h>
#include<conio.h>
  
  void main ()
{
  int i,n=1;
  clrscr();
  printf("Enter an int:");
  scanf("%d",&n);
  
 for(i=2;i<=n-1;i++)
{

   if(n%i==0)
 {
   printf("Not a prime no"); 
   break;
 }
}
   if(i==n)
  printf("Prime no");
  getch();
}