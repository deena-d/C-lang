 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 struct employee {
 int empId;
 char name[32];
 int basic, hra, da;
 int pf;
 float gross, net;
 };
 void printSalary(struct employee e1)
 {
 printf("Salary Slip of %s:\n", e1.name);
 printf("Employee ID: %d\n", e1.empId);
 printf("Basic Salary: %d\n", e1.basic);
 printf("House Rent Allowance: %d\n", e1.hra);
 printf("daily allowance:%d",e1.da);
 printf("\nProvident Fund : %d\n", e1.pf);
 printf("Gross Salary: %.2f Rupees\n", e1.gross);
 printf("\nNet Salary: %.2f Rupees\n\n", e1.net);
 return;
 }
 void main()
{
 int i, ch, num, flag, empID;
 struct employee *e1;
 clrscr();
 printf("Enter the number of employees:");
 scanf("%d", &num);
 e1 = (struct employee *)malloc(sizeof(struct employee) * num);
 for (i = 0; i < num; i++)
 {
 printf("Employee ID:");
 scanf("%d", &(e1[i].empId));
 printf("Employee Name:");
 scanf("%s",e1[i]);
 e1[i].name[strlen(e1[i].name) - 1] = '\0';
 printf("Basic Salary");
 scanf("%d", &(e1[i].basic));
 printf("House Rent Allowance in %");
 scanf("%d", &(e1[i].hra));
 printf("Daily Allowance in %");
 scanf("%d", &(e1[i].da));
 printf("Provident Fund in %:");
 scanf("%d",&e1[i].pf);
 printf("\n");
 }
 for (i = 0; i < num; i++)
{
e1[i].gross = e1[i].basic + ((e1[i].hra * e1[i].basic) / 100) +((e1[i].da * e1[i].basic) / 100 );
 e1[i].net = e1[i].gross-(e1[i].basic*e1[i].pf/100) ;
 }
 while (1)
{
 printf("Enter employee ID to get payslip:");
 scanf("%d", &empID);
 flag = 0;
 for (i = 0; i < num; i++)
{
 if (empID == e1[i].empId)
{
 printSalary(e1[i]);
 flag = 1;
 }
 }
 if (!flag)
{
 printf("No Record Found!!\n");
 }
 printf("Do You Want To Continue(1/0):");
 scanf("%d", &ch);
 if (!ch)
{
 break;
 }
 }
 getch();
}