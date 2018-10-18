#include <stdio.h>

int main()
{
    int h=0, m=0;
	printf ("Enter a 24-hour time: ");
    scanf("%d%d",&h,&m);
	printf ("Equivalent 12-hour time: ");
    if(h>12)
    {
        printf("%d:%d PM\n",h-12,m);
    }
    else if(h==12)
        printf("%d:%d PM\n",h,m);
    else
        printf("%d:%d AM\n",h,m);
     return 0;
}
