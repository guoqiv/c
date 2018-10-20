#include<stdio.h>
 
void swap(int *m,int *n)
{
	int t;
	t=*m;
	*m=*n;
	*n=t;
}
 
int main()
{
	int a,b,c;
	int *p1, *p2, *p3;
	printf("输入a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(a>b)
		swap(p1,p2);
	if(a>c)
		swap(p1,p3);
	if(b>c)
		swap(p2,p3);
	printf("输出a,b,c:\n");
	printf("%d %d %d\n",a,b,c);

	return 0;

}
