#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ԥ����////////////////////////////

/// ��־///////////////////////////////////////
//int main()
//{
//	���ļ�
//	FILE* pf = fopen("test.txt","a+");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		fprintf(pf," %s %s %s %d %d\n",__FILE__,__DATE__,__TIME__,__LINE__,i);
//
//	}
//
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#define�÷�//////////////////////////////
//���Զ��庯�����Զ���
//#define M 1000
//#define MAX(x,y)  ((x)>(y)?(x):(y))
//#define quare(x)   x*x
//int main()
//{
//
//	int a=MAX(400, M);
//	printf("%d\n", a);
//	int b = quare(3);
//	printf("%d\n", b);
//	int c = quare(3+1);//defineֻ���滻,�Ȼ�ֵ�ٻ�����
//	printf("%d\n", c);
//
//
//	return 0;
//}

/////#��##��ʹ��///////////////////////
//#define print(x,y)  printf("The value of "#x" is "y"\n",x)//����ֵת�����ַ�
//int main()
//{
//	int a = 10;
//	print(a,"%d");
//	int b = 12;
//	print(b,"%d");
//
//
//	return 0;
//}
//#define  can(x,y,z)   x##y##z//���ӱ�ʶ��
//int main()
//{
//	int class100100 = 100;
//	printf("%d", can(class, 100, 100));
//
//
//
//	return 0;
//}