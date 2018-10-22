#include<stdio.h>
int main(void)
{
    int i;
    double max, min, score[10], aver, sum;
    sum = 0;
    for(i = 0; i < 10; i++) 
    {
        scanf("%lf", &score[i]);
        max = min = score[0];
        sum += score[i];
        if (max < score[i])
        {    
    
            max = score[i];
        }
        if (min > score[i])
        {
            min = score[i];
        }
    }

    aver = 1.0*( sum - max - min) / 8;
    printf("average = %.1lf\n", aver);
    return 0;
}
