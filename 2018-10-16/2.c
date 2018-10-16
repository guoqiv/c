#include <stdio.h>
#define  PI 3.14 

int main() 
{
	float r = 0, s = 0, c = 0;
	printf("input r\n");
	scanf("%f",&r);
	if(r >= 0)
	{
		s = PI * r * r;
		c = 2 * PI * r;
	  	printf("the area is %f\n",s);
		printf("the circumference is %f\n",c);
	}
	else 
	{ 
		printf("input error!\n");	
	}

	return 0;
}
