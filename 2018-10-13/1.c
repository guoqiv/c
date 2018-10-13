#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =0,b = 0;
    
    printf("Enter a dollar amount:");
    scanf("%d",&a);
   
	b = a/20;
    a = a-(b*20);
    printf("$20 bills: %d\n",b);
   
	b = a/10;
    a = a-(b*10);
    printf("$10 bills: %d\n",b);
    
	b = a/5;
    a = a-(b*5);
    printf("$5  bills: %d\n",b);
   
    printf("$1  bills: %d\n",a);
    return 0;
}
