#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)//EOF������Ϊ-1
    {
        getchar();//ȡ���س��ַ�
        printf("%c\n", c + 32);
    }
    return 0;
}