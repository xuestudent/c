#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



void test(char* str)
{

}
int add(int x, int y)
{
	return x + y;
}
int main()
{
	const char* pc = "helloworld";
	printf("%c\n", *pc);
	printf("%s\n", pc);
	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* arr[3] = { a,b,c };//�ŵ�����Ԫ�ص�ַ
	int i = 0;
	for (i=0;i<3;i++)
	{
		int j = 0;
		for (j=0;j<5;j++)
		{
			//printf("%d",*(arr[i] + j));
			printf("%d", arr[i][j]);//ģ�����ά����  ���������
		}
		printf("\n");
	}

	printf("%p\n", &add);
	printf("%p\n", add);
	int (*pf)(int, int) = &add;

	void (*pt)(char*) = &test;
	//int ret = (*pf)(3, 5);
	int ret = pf(3, 5);
	printf("%d\n", ret);
	(*(void(*)())0)();
	//1.void(*)()-����ָ������
	//2.(void(*)())0-��0����ǿ������ת����������Ϊһ��������ַ
	//3.*(void(*)())0-��0��ַ�����˽����ò���
	//4.(*(void(*)())0)()-����0��ַ���ĺ���
	void(*signal(int, void(*)(int)))(int);
	//1.signal��()�Ƚ��˵��

	return 0;
}