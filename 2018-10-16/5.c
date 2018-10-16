#include<stdio.h>

int main()
{ 
	int a,b;
	printf("Please enter a,b:");
	scanf("%d%d", &a, &b);

	printf("Before swap: a = %d,b = %d\n", a,b);
	Swap(&a, &b);
	printf("After swap: a = %d,b = %d\n", a, b);  
	
	return 0;
}

void Swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp; 
}

