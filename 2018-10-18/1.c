/*同时输入两个分数并计算*/

#include <stdio.h>

int main(void)
{
    /* 定义两个分数的变量，分子分别是x1和x2，分母是y1和y2 */
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    /* 计算出的分子用result_num变量表示，分母用result_denom变量表示 */
    int result_num = 0, result_denom = 0;

    printf("Enter two fractions separated by a plus sign: ");
    /* 读取两个分数 */
    scanf("%d/%d+%d/%d", &x1, &y1, &x2, &y2);

    /* 计算两个分数的和 */
    result_num = x1 * y2 + x2 * y1;
    result_denom = y1 * y2;
    printf("The sum is: %d/%d\n", result_num, result_denom);

    return 0;
}
