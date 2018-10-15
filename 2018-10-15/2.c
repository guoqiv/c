#include<stdio.h>

int main()
{
    int n,m,temp,sum;
    scanf("%d%d",&n,&m);
    sum=n*m;
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    while(n%m!=0)
    {
        temp=m;
        m=n%m;
        n=temp;
    }
    printf("最大公约数是%d\n",m);
    printf("最小公倍数是%d\n",sum/m);//最小公倍数是这两个数的乘积除以最大公约数 
    return 0;
}
