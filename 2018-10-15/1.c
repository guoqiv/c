#include<stdio.h>
#include<string.h>
 
int main() 
{
    char str[20] = {0};
    char b[20] = {0};
    int m, i, length;
    int j = 0;
    char c;
 
    printf("请输入字符串：");
    scanf("%s", str);
    getchar();
    printf("请输入插入位置：");
    scanf("%d", &m);
    getchar();   //消除enter影响
    printf("请输入插入元素：");
    scanf("%c",&c);
    length = strlen(str);
 
    for(i = m-1; i <= length; i++)
    {
        b[j] = str[i];
        j++;
    }
 
    str[m-1] = c;
    j = 0;
 
    for(i = m; i <= length; i++)
    {
        str[i] = b[j];
        j++;
    }
 
    printf("结果：%s\n", str);
    return 0;
 
}
