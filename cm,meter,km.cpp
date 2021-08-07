#include <stdio.h>
int main()
{
	float cm, meter, km;
	printf("enter the length in centimeter:");
	scanf("%f",&cm);
	meter = cm/100.0;
	km = cm/100000.0;
	printf("length in meter = %2fm\n",meter);
	printf("length in kilometer = %2fkm\n",km);
	
	return 0;
}
