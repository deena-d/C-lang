#include "stdio.h"
#include "string.h"
struct dir
{
char name[20];
char number[10];
};
void insert(FILE *);
void update(FILE *);
void del(FILE *);
void display(FILE *);
void search(FILE *);
int record = 0;
int main(void)
{
int choice = 0;
FILE *fp = fopen( "data4.dat", "w+" );
if (fp == NULL ) perror ("Error opening file");
while (choice != 6)
{
printf("\n1 insert\t 2 update\n");
printf("3 delete\t 4 display\n");
printf("5 search\t 6 Exit\n Enter choice:");
scanf("%d", &choice);
switch(choice)
{
case 1: insert(fp); break;
case 2: update(fp); break;
case 3: del(fp); break;
case 4: display(fp); break;
case 5: search(fp); break;
default: ;
}
}
fclose(fp);
return 0;
}
void insert(FILE *fp)
{
struct dir contact, blank;
//fseek( fp, -sizeof(struct dir), SEEK_END );
//fread(&blank, sizeof(struct dir), 1, fp);
printf("Enter individual/company name: ");
scanf("%s", contact.name);
printf("Enter telephone number: ");
scanf("%s", contact.number);
fwrite(&contact, sizeof(struct dir), 1, fp);
}
void update(FILE *fp)
{
char name[20], number[10];
int result;
FILE *fptr;
struct dir contact,blank;
fptr=fopen("data4.dat","a+");
printf("Enter name:");
scanf("%s", name);
rewind(fp);
while(!feof(fptr))
{
result = fread(&contact, sizeof(struct dir), 1, fptr);
if(result != 0 && strcmp(name, contact.name) == 0)
{
printf("Enter number:");
scanf("%s",number);
strcpy(contact.number,number);
fseek(fptr, -sizeof(struct dir), SEEK_CUR);
fwrite(&contact, sizeof(struct dir), 1, fptr);
printf("Updated successfully\n");
fclose(fptr);
return;
}
}
printf("Record not found\n");
}
void del(FILE *fp)
{
char name[20], number[10];
int result, record=0;
struct dir contact, blank = {"", ""};
printf("Enter name:");
scanf("%s", name);
rewind(fp);
while(!feof(fp))
{
result = fread(&contact, sizeof(struct dir), 1, fp);
if(result != 0 && strcmp(name, contact.name) == 0)
{
fseek(fp, record*sizeof(struct dir), SEEK_SET);
fwrite(&blank, sizeof(struct dir), 1, fp);
printf("%d Deleted successfully\n", record-1);
return;
}
record++;
}
printf("not found in %d records\n", record);
}
void display(FILE *fp)
{
struct dir contact;
int result;
rewind(fp);
printf("\n\n Telephone directory\n");
printf("%20s %10s\n", "Name", "Number");
printf("*******************************\n");
while(!feof(fp))
{
result = fread(&contact, sizeof(struct dir), 1, fp);
if(result != 0 && strlen(contact.name) > 0)
printf("%20s %10s\n",contact.name, contact.number);
}
printf("*******************************\n");
}
void search(FILE *fp)
{
struct dir contact;
int result; char name[20];
rewind(fp);
printf("\nEnter name:");
scanf("%s", name);
while(!feof(fp))
{
result = fread(&contact, sizeof(struct dir), 1, fp);
if(result != 0 && strcmp(contact.name, name) == 0)
{
printf("\n%20s %10s\n",contact.name, contact.number);
return;
}
}
printf("Record not found\n");
}