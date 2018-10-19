#include <stdio.h>
 
int main (void)
{
	float num, max = 0.0f;
	printf ("Enter a number: ");
	scanf ("%f", &num);
	
	for (; num > 0.0f; ) 
	{
		if (num > max) 
		{	
			max = num;
		}
		printf ("Enter a number: ");
		scanf ("%f", &num);
	}
	
	printf ("The largest number entered was %.2f\n", max);   
	
	return 0;	
}
