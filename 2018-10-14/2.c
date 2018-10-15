#include<stdio.h>

int main()
{
	int total = 0;
	int i=1;
	while( i<100)
	{
		total += i * i;
		i += 2 ;
	}
	printf("total: %d \n", total);
	
	return 0;
}
