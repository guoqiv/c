#include <stdio.h>
  
int main(void)
{	
		int day = 0, month = 0, year = 0;
      	printf("Enter a date (mm/dd/yyyy): ");
      	scanf("%d/%d/%d", &month, &day, &year);
     	printf("You entered the date: %.2d%.2d%d\n", year, month, day);   /*月和日用%.2d显示，保证月份和日期会以两位数形式显示 */
		     	
		return 0;
}
