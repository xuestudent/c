#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void test(char* str)
//{
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	const char* pc = "helloworld";
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };//�ŵ�����Ԫ�ص�ַ
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j=0;j<5;j++)
//		{
//			//printf("%d",*(arr[i] + j));
//			printf("%d", arr[i][j]);//ģ�����ά����  ���������
//		}
//		printf("\n");
//	}
//
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int (*pf)(int, int) = &add;
//
//	void (*pt)(char*) = &test;
//	//int ret = (*pf)(3, 5);
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//	(*(void(*)())0)();
//	//1.void(*)()-����ָ������
//	//2.(void(*)())0-��0����ǿ������ת����������Ϊһ��������ַ
//	//3.*(void(*)())0-��0��ַ�����˽����ò���
//	//4.(*(void(*)())0)()-����0��ַ���ĺ���
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal��()�Ƚ��˵��signal�Ǻ�����
//	//2.signal�����ĵ�һ��������int���͵ڶ��������Ǻ���ָ��
//	//�ú���ָ��ָ��һ������Ϊint������������void�ĺ���
//	//3.signal������������Ҳ��һ������ָ��
//	//�ú���ָ��ָ��һ������Ϊint������������void�ĺ���
//	//signal��һ������������
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//} 
//int main()//����ָ������-��ź���ָ�������
//{
//	int (*pf1)(int ,int)= add;
//	int (*pf2)(int, int) = sub;
//	int (*pfarr[2])(int, int) = {add,sub};//����ָ������
//	return 0;
//}
int add(int x, int y)
{
	return x + y;
}


int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}


int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("***  1.add      2.sub  ***\n");
	printf("***  3.mul      4.div  ***\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("**************************\n");

}
	int CALC(int(*pf)(int,int))
   {
		int x = 0;
		int y = 0;
		printf("����������->");
		scanf("%d %d", &x, &y);
		return (*pf)(x,y);

   }

int main()
{
	//���������������μ� �� �� ��
	int intput = 0;
//	do
//	{
//		menu();
//
//		//ת�Ʊ�
//		int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div};//����ָ������
//		int x = 0;
//		int y = 0;
//		
//		printf("������->");
//		scanf("%d", &intput);
//		if (intput>0&& intput<=4)
//		{
//		printf("����������->\n");
//		scanf("%d %d", &x, &y);
//		int ret = (pfarr[intput])(x, y);
//		printf("%d\n", ret);
//		}
//		else if (intput == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	} while (intput);



	do
	{
		menu();
		int ret = 0;
		printf("������->");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			ret = CALC(add);
			printf("%d\n", ret);
			break;
		case 2:
			ret = CALC(sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = CALC(mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = CALC(div);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ���������ѡ��\n");
		}

	} while (intput);





	return 0;
}

