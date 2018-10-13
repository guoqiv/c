#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,sum = 0 ;
    printf("输入一个正整数 n:");
    scanf("%d",&n);
  
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
 
    printf("1 to %d 的总和是 %d\n",n,sum);
    return 0;
}
