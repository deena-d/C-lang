#include<stdio.h>
#include<conio.h>
struct mark_sheet
{
 char name[20];
 long int rollno;
 int marks[10];
 int total;
 float average;
 char rem[10];
 char cl[20];
 }students[100];
 int main()
{
 int a,b,n,flag=1;
 char ch;
 clrscr();
 printf("How many students : \n");
 scanf("%d",&n);
 for(a=1;a<=n;++a){
 clrscr();
 printf("\n\nEnter the details of %d students : ", n-a+1);
 printf("\n\nEnter student %d Name : ", a);
 scanf("%s", students[a].name);
 printf("\n\nEnter student %d Roll Number : ", a);
 scanf("%ld", &students[a].rollno);
 students[a].total=0;
 for(b=1;b<=5;++b){
 printf("\n\nEnter the mark of subject-%d : ", b);
 scanf("%d", &students[a].marks[b]);
 students[a].total += students[a].marks[b];
 if(students[a].marks[b]<40)
 flag=0;
 }
 students[a].average = (float)(students[a].total)/5.0;
 if((students[a].average>=75)&&(flag==1))
 strcpy(students[a].cl,"Distinction");
 else
 if((students[a].average>=60)&&(flag==1))
 strcpy(students[a].cl,"First Class");
 else
 if((students[a].average>=50)&&(flag==1))
 strcpy(students[a].cl,"Second Class");
 else
 if((students[a].average>=40)&&(flag==1))
 strcpy(students[a].cl,"Third Class");
 if(flag==1)
 strcpy(students[a].rem,"Pass");
 else
 strcpy(students[a].rem,"Fail");
 flag=1;
 }
 for(a=1;a<=n;++a){
 clrscr();
 printf("\n\n\t\t\t\tMark Sheet\n");
 printf("\nName of Student : %s", students[a].name);
 printf("\t\t\t\t Roll No : %ld", students[a].rollno);
 printf("\n------------------------------------------------------------------------");
 for(b=1;b<=5;b++){
 printf("\n\n\t Subject %d \t\t :\t %d", b, students[a].marks[b]);
 }
 printf("\n\n------------------------------------------------------------------------\n");
 printf("\n\n Totl Marks : %d", students[a].total);
 printf("\t\t\t\t Average Marks : %5.2f", students[a].average);
 printf("\n\n Class : %s", students[a].cl);
 printf("\t\t\t\t\t Status : %s", students[a].rem);
 printf("\n\n\n\t\t\t\t Press Y for continue . . . ");
 ch = getche();
 if((ch=="y")||(ch=="Y"))
 continue;
 }
 return(0);
 }
