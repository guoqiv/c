
#include <stdio.h>
 
int main (void)
{
	int num10, num8; 
	
	printf ("Enter a number between 0 and 32767: ");
	scanf ("%d", &num10);
	
	int a, b, c, e, d;
	a = num10 % 8;
	b = (num10 / 8) % 8;
	c = (num10 / 8 / 8) % 8;
	d = (num10 / 8 / 8 / 8) % 8;
	e = (num10 / 8 / 8 / 8 / 8) % 8;
	
	printf ("In octal, your number is: %d%d%d%d%d\n", e, d, c, b, a); 
	
	return 0;
}
