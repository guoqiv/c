#include <stdio.h>
 
int main (void)
{
	int day, week;
	
	printf ("Enter number of days in month: ");
	scanf ("%d", &day);
	printf ("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf ("%d", &week);
	
	for (int i = week; i > 1; i--) 
	{
		printf ("   ");
	}	
	for (int i = 1; i <= day; i++, week++)
	 {
		printf ("%3d", i);
	
		if (week == 7)
		 {
			week = 0;
			printf ("\n");	
		 }
	}
	
	return 0;
}
