#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/////������(������)//////////////////////////////////////////////////////////////////////////////
//�ռ�Ҫ��֤�����������ı���
//������Ĵ洢
union un
{
	char a;
	int b;
};



union un2
{
	char a[5];
	int b;
};
check_sts()
{
	union ch 
	{
		char a;
		int b;
	};
	union ch c;
	c.b = 1;
	return c.a;


}
int main()
{

	union un u;
	union un2 u2;
	printf("%d\n", sizeof(u));
	printf("%d\n", sizeof(u2));


	if (check_sts()==1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}