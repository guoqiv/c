/*输入电话号码(xxx) xxx-xxxx并转换格式显示xxx.xxx.xxxx */

#include <stdio.h>

int main(void)
{
    /* 将电话号码拆分成3组，分别定义成num1、num2和num3 */
    int num1 = 0, num2 = 0, num3 = 0;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    /* 根据提示的格式分别将3组数字存入变量中 */
    scanf("(%d) %d-%d", &num1, &num2, &num3);

    printf("You entered: %d.%d.%d\n", num1, num2, num3);

    return 0;
}
