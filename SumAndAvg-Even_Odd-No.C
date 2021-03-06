#include<stdio.h>
#include<conio.h>
 void main()
{
 int i;
 int arr[10];
 int soe=0,sod=0,count=0;
 clrscr();
 printf("Enter a no:");
 scanf("%d",&n);
  for(i=0;i<=9;i++)
   {
     printf("Enter a no:");
     scanf("%d",&arr[i]);
   }
    if(arr[i]%2==0)
     { 
       soe = soe+arr[i];
       count = count+1;
     }
    else
       sod = sod+arr[i];
   }
     printf("Sum Of Even = %d",soe);
     printf("\nSum Of Odd = %d",sod);
     printf("\n Average Of Even = %f",(float)soe/count);
     printf("\n Average Of Odd = %f",(float)sod/(10-count));
  getch();
}