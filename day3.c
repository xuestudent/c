#define _CRT_SECURE_NO_WARNINGS 1
//整数的个位数
#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", a % 10);
    return 0;
}