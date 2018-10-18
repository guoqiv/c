#include <stdio.h>
 
int main (void)
{
	int num, rev;
	
	printf ("Enter a two-digit number: ");
	scanf ("%2d", &num);	//这里的%2d是为了只取2位有效数字；
	
	int a, b;
	a = num / 10; 			//a是十位；
	b = num % 10; 			//b是个位；
	rev = b * 10 + a;
	
	printf ("The reversal is: %d\n", rev);	
	
	return 0;
}
