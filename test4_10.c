#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)//���scanf����eofֹͣ����
    {
        getchar();//��ȡһ���ַ�
        printf("%c\n", c + 32);//A��ascii��ֵΪ65��a��97ֻ��32���Ͼ���a
    }
    return 0;
}