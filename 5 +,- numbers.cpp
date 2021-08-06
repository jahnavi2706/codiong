#include <stdio.h>
int main()
{
	float number[5];
	int j, pctr=0, nctr=0;
	printf("\ninput the first number:");
	scanf("%f", &number[0]);
	printf("\ninput the second number:");
	scanf("%f", &number[1]);
	printf("\ninput the third number:");
	scanf("%f", &number[2]);
	printf("\ninput the fourth number:");
	scanf("%f", &number[3]);
	printf("\ninput the fifth number:");
	scanf("%f", &number[4]);
	 for(j=0;j<5;j++)
	 {
	 	if (number[j]>0)
	 	{
	 		pctr++;
		}
		else if(number[j]<0)
		{
			nctr++;
		}
	 }
	printf("\nnumber of positive number: %d",pctr);
	printf("\nnumber of negative number: %d",nctr);
	printf("\n");
	
	return 0;
}
