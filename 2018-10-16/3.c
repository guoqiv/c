#include <stdio.h>

int max(int x,int y)
{ 
    if (x < y)
    { 
    	return(y);
	}
	else
	{
   	 	return(x);
	}
}
      
int main()
{

	int a = 0, b = 0, m;

	scanf("%d%d",&a,&b);

	m = max(a,b);

	printf("Max is %d\n",m);

	return 0;
}
