#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int digit = 0,letter = 0,other = 0;//数字 字母 其他
    char ch;
    printf("Enter 10 characters:");
    for(int i = 1; i <= 10; i++)
    {
        ch = getchar();
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
			letter++;
		}
        else if( ch >= '0' && ch <= '9')
		{
            digit++;
		}
        else
		{
			other++;
		}
    }
    printf("letter=%d,digit=%d,other=%d\n",letter,digit,other);
    return 0;
}
