#include <stdio.h>

int main()
{
	float h = 100,a = 0,sum;
	int i;
	for( i = 1; i < 10; i++)
	{
		h = h/2;
		a = a  + 2*h;
	}
	sum = a + 100 - h;
	printf("第10次落地时共经过 %f 米\n",sum);
	printf("第10次反弹 %f 米\n",h);

	return 0;
}
