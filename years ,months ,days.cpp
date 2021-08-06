#include <stdio.h>
int main() 
{
	int ndays, y, m, d;	
	ndays=5000;
	y = (int) ndays/365;
	ndays = ndays-(365*y);
	m = (int)ndays/30;
	d = (int)ndays-(m*30);
	printf(" %d Years \n %d Months \n %d Days", y, m, d);
	
	return 0;
}

