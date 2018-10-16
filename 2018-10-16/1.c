#include <stdio.h>

int main()
{
	int a = 0, b = 0, sum = 0;
	printf("please input a and b:\n");
	scanf("%d%d",&a,&b);
	sum = a * a + b * b;
	printf("%d\n",sum);

	return 0;
}
