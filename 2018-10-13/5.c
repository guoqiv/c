#include <stdio.h> 
 
int main()
{
	int y,m,d,days,February;//年 月 日 天数 二月
    
    printf("input the year:");
    scanf("%d",&y);
    
    printf("input the mouth:");
    scanf("%d",&m);
     
    printf("input the day:");
    scanf("%d",&d);
    
    if (y%400==0||(y%4==0&&y%100!=0)) 
    
    {
			 February=29;
	}
    
    else 
	{
        February=28;
 	}
 
		switch (m)
		{
            case 1:
                days=0;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 2:
                days=31; 
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 3:
                days=31+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 4:
                days=62+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 5:
                days=92+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 6:
                days=123+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 7:
                days=153+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 8:
                days=184+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 9:
                days=215+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 10:
                days=245+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 11:
                days=276+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
            case 12:
                days=306+February;
                printf("%d年%d月%d日是一年中的第%d天！",y,m,d,days+d);
                break;
                
            default:
                    printf("你输入月份错误!"); 
                break;
        }
    return 0;
}
