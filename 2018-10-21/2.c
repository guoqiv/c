#include<stdio.h>

int main()
{
    int i, j;
    double a[10], tmp;
    printf("Input 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%lf\n",&a[i]);
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j <10 - i; j++)
            if (a[j] > a[j+1]) 
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
    }       
    for (i = 0; i < 10; i++)
    {
        printf("%6.1f", a[i]);
    }
    printf("\n");
    
    return 0;
}

