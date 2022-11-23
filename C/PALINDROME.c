#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
 char a[100], b[100];
clrscr();
 printf("Enter a string to check if it's a palindrome\n");
 gets(a);
 strcpy(b, a); // Copying input string
 strrev(b); // Reversing the string
 if (strcmp(a, b) == 0) // Comparing input string with the reverse string
 printf("The string is a palindrome.\n");
 else
 printf("The string isn't a palindrome.\n");
getch();
 return 0;
}