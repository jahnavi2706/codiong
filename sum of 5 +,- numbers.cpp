#include <stdio.h>
int main()
{
	float number[5], total=0, avg;
	int j, pctr=0;
	printf("\ninput the first number:");
	scanf("%f", &number[0]);
	printf("\ninput the second number:");
	scanf("%f", &number[1]);
	printf("\ninput the third number:");
	scanf("%f", &number[2]);
	printf("\input the fourth number:");
	scanf("%f", &number[3]);
	printf("\ninput the fifth number:");
	scanf("%f", &number[4]);
	for(j=0; j<5;j++)
	  {
	  	if(number[j]>0)
	  	{
	  		pctr++;
	  		total +=number[j];
		}
	  }
	avg = total/pctr;
	printf("\nnumber of positive number:%d",pctr);
	printf("\naverage value of the said positive number:%2f", avg);
	printf("\n");
	
	return 0;
}
