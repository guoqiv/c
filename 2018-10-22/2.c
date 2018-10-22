#include <stdio.h>
int main(void)
{
        int a = 0b11100101;
        //当bit3变为1：0b1110 1101 十六进制表示：0xED
        a |= 1 << 3;
        printf("a = 0x%X \n",a);
 
        return 0;
}
