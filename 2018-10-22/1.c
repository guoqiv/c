
#include<stdio.h>
 
void fun (char a)
{
	int i;
	int temp;
	int count = 0;
	for(i = 0; i < 8; ++i)
	{
		temp = (a >> i) & 1;
		if(temp == 1)
		{
			count ++;
		}
	}
	printf("字节中被置为1的个数是：\n");
	printf("%d\n", count);
}
 
int main()
{
	char c;
	printf("请输入一个字符！\n");
	scanf("%c", &c);
	fun(c);
	return 0;
}

