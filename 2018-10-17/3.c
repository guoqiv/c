/*ISBN分解*/

#include <stdio.h>

int main(void)
{
    /* 第一组数字的变量定义为gs1，第二组数字的变量定义为group_id，第三组数字的变量定义为pub_code，第四组数字的变量定义为item_num，校验位定义为check_d */
    int gs1 = 0, group_id = 0, pub_code = 0, item_num = 0, check_d = 0;

    printf("Enter ISBN: ");
    /* 每组数字看成一个整体，通过-来识别每组数字，并将其存入对应的变量中，这样每组数字个数即使发生变化也能正确的显示出来 */
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &pub_code, &item_num, &check_d);

    /* 直接将每组变量分别显示出来即可 */
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublish code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group_id, pub_code, item_num, check_d);

    return 0;
}
