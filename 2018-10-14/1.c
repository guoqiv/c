#include <stdio.h>

int main()
{
    int best, ten, a, n; //百位 十位 个位
    printf("result is:");
    for( n=100; n<1000; n++ )  /*整数的取值范围*/
    {
        best = n / 100;
        ten = (n-best*100) / 10;
        a = n % 10;
        if(n == best*best*best + ten*ten*ten + a*a*a) 
        printf("%d  ", n);
    }
    printf("\n");
   
    return 0;
}
