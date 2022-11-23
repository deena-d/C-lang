#include <stdio.h>
#include<conio.h>
void hanoi(int , char , char , char );
void main()
{
 int n = 4; // Number of disks
 hanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
 getch();
}
void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
 if (n == 1)
 {
 printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
 return;
 }
 hanoi(n-1, from_rod, aux_rod, to_rod);
 printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
 hanoi(n-1, aux_rod, to_rod, from_rod);
}