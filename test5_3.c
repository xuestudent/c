#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



/// ///////////////////��̬�ڴ�
//int main()
//{
//	//���ٶ�̬�ڴ�
//	int*p=(int*)malloc(10*sizeof(int));
//	//�ж��ڴ��Ƿ�����
//	if (p == NULL)
//	{
//		perror("main");
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		*(p + i) = i;
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);
//	}
//	//�����ڴ�
//	free(p);
//	p = NULL;
//	return 0; 
//}

//////////////////////calloc����///////////////////////////////
//int main()//��calloc�ĳ�ʼ��ֵ��0��mallocȴ�����ֵ�����߲�����һ��
//{
//	//���ٶ�̬�ڴ�
//	int*p=(int*)calloc(10,sizeof(int));
//	//�ж��ڴ��Ƿ�����
//	if (p == NULL)
//	{
//		perror("main");
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//    {
//	printf("%d  ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//////////////////////////////////////realloc����/////////////////////////////////
int main()//��calloc�ĳ�ʼ��ֵ��0��mallocȴ�����ֵ�����߲�����һ��
{
	//���ٶ�̬�ڴ�
	//int* ptr = (int*)realloc(NULL, 10 * sizeof(int))��callocʵ�ֵ���һ����
	int* p = (int*)calloc(10, sizeof(int));
	//�ж��ڴ��Ƿ�����
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}

	//����������
	int*ptr =(int*)realloc(p,20*sizeof(int));//�п��ܺ���Ŀռ乻���п��ܲ����ã�
	//�п����Ҳ������ʵĿռ��������ͷ���NULL
	if (ptr!=NULL)//�ж��Ƿ��ǿ�ָ��
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}