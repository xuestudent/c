#include<stdio.h>
//int main()
//{
//
//	int a = 10;//aռ�ĸ��ֽڵĿռ�
//	int *pa=&a;//ȡ�ĸ��ֽڵĵ�һ���ֽڵĵ�ַ
//	*pa = 20;//�Ϳ���ͨ��ָ���ַ����a
//	printf("%d\n",sizeof a);//ָ����32λ��4���ֽ�  ��64λ��8���ֽ�
//	return 0;
//}
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof pa);
//	printf("%d\n", sizeof pc);
//	printf("%d\n", sizeof pf);//������Сһ����
//
//	return 0;
//}

//ָ������
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;�����;ָ����һ�������߶�Զ��������
  int main()
{

	//int arr[] = { 0 };
	//int* p = arr;
	//char* pc = arr;//���ܴ�ŵ�ַ
	//printf("%p\n", p);
	//printf("%p\n", p+1);

	//printf("%p\n", pc);
	//printf("%p\n", pc+1);

	////int a = 0x11223344;//int��32��biteλһ����ռ�ĸ�biteλ����������һ���ֽ�

	////int* pa = &a;
	////*pa = 0;//�ı���4���ֽ�

	////char *pc=&a;
	////*pc = 0;//�ı���1���ֽ�
	//////����Ȩ�޷����˱仯

	  int arr[10] = { 0 };
	  int* p = &arr;
	  int i = 0;
	  for (i = 0; i < 10; i++)
	  {
		  *(p + i) = 1;//����������±� 

	  }
	
	return 0;
}