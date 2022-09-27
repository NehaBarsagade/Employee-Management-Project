#include <stdio.h>
#include <stdlib.h>
#include<string.h>
  int i=0,n=0,a,newsalary=0,lp1=1;
  int choice=0,id=0,ch;
  char newName[20];
//void search();
//void update();
//void Show();
//void addemployee();
//void menu();
struct employee {
int EmpID;
char Name [20];
int salary;
}s[50];

  void menu() {
   printf("\n\t\t\t\t \t\t****MAIN MENU***** \n\n ");
   printf("\t\t\t\t\t 1. Add Employee \n");
   printf("\t\t\t\t\t 2. Show Employee Information \n");
   printf("\t\t\t\t\t 3. Update Employee information \n");
   printf("\t\t\t\t\t 4. Search \n");
   printf("\t\t\t\t\t 0. Exit \n\n");
  }
  void addemployee()
{

   //struct addemployee s[50];
   printf("Enter the Number of Employee :");
   scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\n\n****** EMPLOYEE %d DATA ****\n",i+1);
      printf("Employee ID :");
      scanf("%d",&s[i].EmpID);
      printf("Name :");
      scanf("%s",&s[i].Name);
      printf("Salary :");
      scanf("%d",&s[i].salary);
  }
  printf("\n\t\t\t\t\t***Employee's Data Saved !***\n\n");
}
  void Show()
 {
     int j=n;
  printf("\n\t\t\t===============*/ All Employee Data Record */=============\n");
  printf("\n\t\t-------------------------------------------------------------------------------------------\n");
  printf("\n\t\tEmployeeID \t\t|\t\t Name \t\t|\t\tSalary \t\t|\n");
  for(i=0;i<j;i++)
  {
      printf("\n\t\t%d\t\t\t|",s[i].EmpID);
      printf("\t %s \t\t|",s[i].Name);
      printf("\t\t %d \t\t|",s[i].salary);
      //return 0;
  }
        printf("\n\n");
        printf("\t\t\t\t\t***Okay...yes this is all i got..!***\n");
}
void update()
{
int u,id;
printf("\nEnter Your EmployeeID :");
scanf("%d",&id);
for (i=0;i<n;i++)
{
if (id==s[i].EmpID){
printf("Okay.. What do you want to update\n");
printf("\t\t 1. Name\n");
printf("\t\t 2. Salary\n");
printf("Choice :");
scanf("%d",&u);
switch(u)
{
case 1:

//int newName,newsalary,e;
printf("Your old Name is %s\n",s[i].Name);
printf("Please Enter your correct name ?\n");
scanf("%s",&newName);
printf("Your new name is %s and your old name is %s\n",newName ,s[i].Name);
printf("Do you really want to change?\n");
printf("\t\t 1.Yes\n");
printf("\t\t 2.No\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
strcpy(s[i].Name, newName);
printf("\t\t***Okay.. Done! Name Updated Successfully..***\n");break;
case 2:
printf("Choice 1. for employee's data update\n");break;
default :
printf("Invalid!");
break;
}break;
case 2:
{
printf("Your old Salary is %d\n",s[i].salary);
printf("Your new salary ?\n");
scanf("%d",&newsalary);
printf("Your new name is %d and your old name is %d\n\n",newsalary ,s[i].salary);
s[i].salary=newsalary;
printf("\t\t***OK..Done! Salary Updated***\n");break;
}
default :
    printf ("Invalid! Employee ID");break ;
}
}
}
}

  void search()
  {
      int a=0;//101
      printf("search by Employee ID :");
      scanf("%d",&id);
      for (i=0;i<n;i++)//1
      {
        if (id == s[i].EmpID)
        {
            printf("Employee ID : %d\n",s[i].EmpID);
            printf("Employee's Name : %s\n",s[i].Name);
            printf("Employee's Salary : %d\n",s[i].salary);
        }
        else{
            a++;
        }
      }
      if (a==n)
      {
          printf("**This Employee Id is not available or please check EmpID.**\n");
          a=0;
      }
  }
 int main()
 { //int choice=0;
    printf("\n\t\t======================Welcome to Employee Management System =====================\n");
    while(lp1>0)
    {
      menu();
      printf("Enter your choice : ");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        addemployee();
        break;
      case 2:
        Show();
        break;
      case 3:
        update();
        break;
      case 4:
        search();
        break;
      case 0:
        lp1=0;
        printf("\n *Thank you for your business! We look forward to working with you again.\n");
        break;
      default:
        printf("Invalid Choice!");
        break;
      }
    }
   return 0;
 }
