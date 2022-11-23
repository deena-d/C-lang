#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[20];
 int i, n, l, pos;
 clrscr();
 puts("Enter the string\n");
 gets(str);
 printf("Enter the position where the characters are to be deleted\n");
 scanf("%d", &pos);
 printf("Enter the number of characters to be deleted\n");
 scanf("%d", &n);
 l = strlen(str);
 for(i = pos + n; i < l; i++)
 {
 str[i - n] = str[i];
 }
 str[i - n] = '\0';
 printf("The string is %s", str);
 getch();
}