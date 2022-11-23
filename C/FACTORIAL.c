#include <stdio.h>
int factorial(int n);
int main()
{
 int n,result;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 result=factorial(n);
 printf("Factorial of %d = %d", n,result);
 return 0;
}
int factorial( int n ) /*Function Definition*/
{
int temp ;
if( n == 0)
return 1 ;
else
temp = n * factorial( n-1 ) ; // Recursive Function Call
return temp ;
}
