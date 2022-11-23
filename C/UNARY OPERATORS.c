//used to include basice c library files
//unary minus operation performed, negative number becomes positive andpositive number becomes negative
#include <stdio.h>
int main()
{
int a, unaryMinus;
printf("Please enter any number for unary - symbol: \n");
scanf("%d",&a);
unaryMinus=-(a);
printf("Unary minus operation of %d is = %d ",a, unaryMinus);
return 0;
}
