#include <stdio.h>
#include<conio.h>
void swap(int *,int *) ;
void main()
{
 int num1, num2 ;
 num1 = 10 ;
 num2 = 20 ;
 printf("\nBefore swap: num1 = %d, num2 = %d", num1, num2) ;
 swap(&num1,&num2) ;
printf("\nAfter swap: num1 = %d\nnum2 = %d", num1, num2);
 getch() ;
}
void swap(int *a, int *b)
{
 int temp ;
 temp = *a ;
 *a = *b ;
 *b = temp ;
}