#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
intn,r,sum=0;
clrscr();
printf("Enter the number:\n");
scanf("%d",&n);
while(n >0)
 {
 r=n%10;
sum=sum+r;
 n=n/10;
 }
printf("\nSum of digits =%d",sum);
getch();
}