#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
int main()
{
	int score;
  	char grade;
  	printf("please input a score\n");
  	scanf("%d",&score);
  
  	grade=score>=90?'A':(score>=60?'B':'C');
  	printf("%d belongs to %c\n",score,grade);
  	getch();
	return 0;
}
