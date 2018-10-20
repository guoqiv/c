#include <stdio.h>
 
int main (void)
{
	char ch;
	int sum = 0;
	
	printf ("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n')
	 {
		if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
			sum++;
	}
	
	printf ("Your sentence contains %d vowels\n", sum);
	
	return 0;
}
