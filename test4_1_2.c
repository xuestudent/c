#include<stdio.h>
//int main()
//{
//	////Ұָ��  �����p����Ұָ��
//	//int* p;//δ��ʼ����ָ�������ֵ �ֲ�����Ĭ��λΪ���ֵ
//	//*p = 20;//�Ƿ������ڴ�
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//��ѭ��11�ξ�Խ��     �������
//	{
//		*p = i;
//		p++;
//	}
//
//
//	return 0;
//}


//test()
//{
//	int a = 10;//�������ˣ����ͷ�
//	return &a;
//}
//int main()
//{
//
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	//ָ���ʼ����null��ָ��
//	//c�����ǲ��ᱣ֤����Խ���
//	int* P = NULL;
//	return 0;
//}
//ָ������
//1.ָ��+����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//
//}
//2.ָ���ָ���������ָ��֮��Ԫ�صĸ���    ����������ͬ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//}
int my_strlen(char* str)
{
	char* start = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");//�������ַ����׵�ַ
	printf("%d\n", len);


	return 0;
}