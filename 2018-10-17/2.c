/*输入信息并显示，产品编号和日期左对齐，价格右对齐*/
#include <stdio.h>

int main(void)
{
      /* 声明item number变量item_num，unit price变量price，日期变量day、month和year */
	int item_num = 0, day = 0, month = 0, year = 0;
      /* unit price包含小数点，所以其变量应为float型 */
    float price = 1.0f;
 
     /* 用户输入数据，程序录入对应变量中 */
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
 
    printf("Item\t\tUnit\t\tPurchase\n");   /* 第一行显示，中间通过两个制表符\t分隔 */
    printf("\t\tprice\t\tDate\n");          /* 第二行显示，中间通过两个制表符\t分隔 */
     /* 编号和日期是左对齐，所以要在前面加上负号。价格采用%7.2f显示，是因为最大价格是9999.99共七位，在小于七位时用空格占位，.2则是保证小数点后只显示2位数字。 */
     /* 日期中的.2是为了让最少以两位数形式显示，年份为四位数，所以采用.4保证最少显示四位数 */
    printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-.4d\n", item_num, price, month, day, year);
 
    return 0;
}
