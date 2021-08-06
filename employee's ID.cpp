#include <stdio.h>
int main()
{
	int empID,hrs,amtperhr;
	float salary;
	printf("\nemployers ID:");
	scanf("%d",&empID);
	printf("\ntotal worked hours in a month and the amount he received:");
	scanf("%d%d",&hrs,&amtperhr);
	salary = hrs*amtperhr;
	printf("salary in a month=%2f",salary,hrs,amtperhr);
	
	return 0;
}




