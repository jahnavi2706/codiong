#include <stdio.h>
int main()
{
	int x;
	float y;
	printf("\ndistance in km:");
	scanf("%d",&x);
	printf("\nfuel spent in litres:");
	scanf("%f",&y);
	printf("\naverage consumption (km/lt)%2f",x/y);
	
	return 0;
}

