/*
 * main.c
 *
 *  Created on: 22-Jan-2024
 *      Author: lenovo
 */
//Write manubase program to maintain employee database,where user can add,remove,modify each details of employee.
//Employee details like Name,Date of Joining,Birth date,Designation ,Salary.
#include<stdio.h>
struct employee{
	char name[50];
	char designation[50];
	char dateofjoining[50];
	char dob[50];
	int id;
	int salary;
};
int main()
{
	int n,i;
	printf("enter total number of employees:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdout);
	struct employee earray[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter data for employee %d",i+1);
		fflush(stdout);
		printf("\nenter name of an employee:");
		fflush(stdout);
		scanf("%s",earray[i].name);
		fflush(stdout);
		printf("\nenter employee's id:");
		fflush(stdout);
		scanf("%d",&earray[i].id);
		fflush(stdout);
		printf("\nenter date of joining of an employee in dd-mm-yy format:");
		fflush(stdout);
		scanf("%s",earray[i].dateofjoining);
		fflush(stdout);
		printf("\nenter birth date of an employee:");
		fflush(stdout);
		scanf("%s",earray[i].dob);
		fflush(stdout);
		printf("\nenter designation of an employee:");
		fflush(stdout);
		scanf("%s",earray[i].designation);
		fflush(stdout);
		printf("\nenter salary of an employee:");
		fflush(stdout);
		scanf("%d",&earray[i].salary);
		fflush(stdout);
	}
	for(i=0;i<n;i++)
		{
			printf("data of employee %d\n",i+1);
			fflush(stdout);
			printf("name:%s\nid:%d\ndate of joining:%s\nbirth date:%s\ndesignation:%s\nsalary:%d\n",earray[i].name,earray[i].id,earray[i].dateofjoining,earray[i].dob,earray[i].designation,earray[i].salary);
			fflush(stdout);

		}
}
