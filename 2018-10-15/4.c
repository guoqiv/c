#include <stdio.h>
#include <curses.h>

int main()
{
  	int a,b,count=1;
  	long int sn=0,tn=0;
  	printf("please input a and b\n");
  	scanf("%d,%d",&a,&b);
  	printf("a=%d,b=%d\n",a,b);
  
	while(count<=b)
  	{
    	tn=tn+a;
    	sn=sn+tn;
    	a=a*10;
    	++count;
  	}
  	 	printf("a+aa+...=%ld\n",sn);
	  	getch();
	return 0;

}
