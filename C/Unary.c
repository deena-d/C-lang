//- Unary increment operator
//used to include basice c library files
#include <stdio.h>
int main()
{
int a, pre_increment,post_increment;
printf("Please enter any number \n");
scanf("%d",&a);
//take temp variable for showing actual number in output
int temp=a;
//increment value by 1 before assigning the value
pre_increment=++a;
//displaying output
printf("Pre increment operation of %d is =%d ",temp, pre_increment);
return 0;
}