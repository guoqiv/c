#include <stdio.h>
 
int main (void)
{
	int num;
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for (int i = 2; i * i <= num; i = i + 2) {
		
		printf ("%d\n", i * i);
	}
	
	return 0;
}
