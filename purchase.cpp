#include <stdio.h>
int main()
{
	float items,cost,wt,tcost,twt;
	printf("\n enter number of items: ");
	scanf("%d",&items);
	printf("\n cost(in rupees):");
	scanf("%f",&cost);
	printf("\n weight( in kg):");
	scanf("%f",&wt);
	tcost = items*cost;
	printf("tcost=%2frupees\n",tcost,items,cost);
	twt = items*wt;
	printf("twt=%2fkg\n",twt,items,wt);
	
	return 0;
}
