#include<stdio.h>
#include<conio.h>
 void main()
{
 int i,n,rev,rem;
 clrscr();
 printf("Enter a no:");
 scanf("%d",&n);
 i=n;
  for(rev=0;n>0;n=n/10)
   {
     rem = n%10;
     rev = rev*10+rem;
   }
    if(rev==i)
     printf("Reverse No.");
    else
     printf("Not Reverse No.");
  getch();
}