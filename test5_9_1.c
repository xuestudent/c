#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//ֱ�Ӵӿ��ļ���
#include"test.h"//�ȴӱ����ң��Ҳ����ٵ����ļ���
//�궨��ĸ�����
//�����ͻ��ø����ó��ֲ���Ԥ��ĺ��
//#define MAX(a,b) ((a)>(b)?(a):(b))
//#define MALLOC(num,type)    (type*)malloc(num*sizeof(type))
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("%d %d %d ", x, y, z);
//	MALLOC(10,int);
//}
//�궨��ĳ���
//#define M 100
//int main()
//{
//	int a = M;
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", a);//����֮���ܴ�ӡ
//
//	return 0;
//}
#define TEST
#define HEHE
int main()
{

//���TEST����ִ���������///////////////////////////////////
#ifdef TEST
	printf("test1\n");
#endif 


#if defined(TEST)
	printf("test2\n");
#endif

//���HEHE����������������	////////////////////////
#ifndef HEHE
	printf("hehe1\n");
#endif

#if ! defined(HEHE)
	printf("hehe2\n");


#endif



	return 0;
}