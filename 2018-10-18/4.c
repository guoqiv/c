#include <stdio.h>
 
int main (void)
{
	int num = 0;
	int dig = -1;				// 初始化-1便于发现错误 
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	if (num < 0) 
	{	
 
	}
    else if (num < 10)
	{
		dig = 1;
	}
	else if (num < 100)
	{
		dig = 2;
	}
	else if (num < 1000)
	{
		dig = 3; 
	}
	else if (num < 10000)
	{
		dig = 4;
	}
	printf ("The number %d has %d digits\n", num, dig);
	return 0;
}
