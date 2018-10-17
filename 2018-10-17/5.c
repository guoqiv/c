/*输入1到16所有整数，以4*4显示，并计算每行、每列、和对角线的和 */

#include <stdio.h>

int main(void)
{
    /* 定义十六个数字的变量，从num1到num16 */
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0;
    /* 拆成两行定义是因为写在一行里实在是太长了，不方便阅读 */
    int num9 = 0, num10 = 0, num11 = 0, num12 = 0, num13 = 0, num14 = 0, num15 = 0, num16 = 0;
    /* 定义4×4矩阵的每行和的变量，从row1到row4 */
    int row1 = 0, row2 = 0, row3 = 0, row4 = 0;
    /* 定义4×4矩阵的每列和的变量，从col1到col4 */
    int col1 = 0, col2 = 0, col3 = 0, col4 = 0;
    /* 定义两个对角线和的变量dia1和dia2 */
    int dia1 = 0, dia2 = 0;

    printf("Enter the numbers from 1 to 16 in any order: ");
    /* 将十六个数字分别存入到16个变量里 */
    scanf("%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8);
    /* 同样因为太长了，所以拆成两行写 */
    scanf("%d%d%d%d%d%d%d%d", &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    /* 显示出矩阵，根据题目示例，每个数字应该保证两个字符宽，右对齐。通过制表符来使每行和每列对齐 */
    printf("%2d\t%2d\t%2d\t%2d\t\n%2d\t%2d\t%2d\t%2d\t\n", num1, num2, num3, num4, num5, num6, num7, num8);
    printf("%2d\t%2d\t%2d\t%2d\t\n%2d\t%2d\t%2d\t%2d\t\n\n\n", num9, num10, num11, num12, num13, num14, num15, num16);

    /* 计算每行的和 */
    row1 = num1 + num2 + num3 + num4;
    row2 = num5 + num6 + num7 + num8;
    row3 = num9 + num10 + num11 + num12;
    row4 = num13 + num14 + num15 + num16;

    /* 计算每列的和 */
    col1 = num1 + num5 + num9 + num13;
    col2 = num2 + num6 + num10 + num14;
    col3 = num3 + num7 + num11 + num15;
    col4 = num4 + num8 + num12 + num16;

    /* 计算两个对角线的和 */
    dia1 = num1 + num6 + num11 + num16;
    dia2 = num4 + num7 + num10 + num13;

    /* 显示结果 */
    printf("Row sums: %d  %d  %d  %d  \nColumn sums: %d  %d  %d  %d  \n", row1, row2, row3, row4, col1, col2, col3, col4);
    printf("Diagonal sums: %d  %d  \n", dia1, dia2);

    return 0;
}
