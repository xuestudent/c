#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
///// ///// //// /////��̬�ڴ泣������/////////////////////////////////
//1.
void test()
{
	int* p = (int*)malloc(100);
	*p = 20;//��Ҫ�ж��Ƿ���NULL
	free(p);
}
void test2()
{
	int i = 0;
	int* p = (int*)malloc(sizeof(int));
	if (p==NULL)
	{
		perror("test2");
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;//��iΪ10��ʱ���Խ�����
	}
	free(p);
}
void test3()
{
	int i = 0;
	int* p = &i;
	free(p);//���ܶԷǶ�̬�����ڴ�����ͷ�

}
void test4()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);//ԭʼ��ַ�仯�ͷžͻ��д�
}
void test5()
{
	int* p = (int*)malloc(100);
	//ʹ��
	free(p);
	/// //////
	free(p);//��һ���ڴ����ͷ�
}
void test6_1()
{
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		perror("test2");
	}
}
void test6()
{
	test6_1();//�ڴ�й¶
}
int main()
{
	test();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}