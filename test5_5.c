#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h> 
struct a
{
	int n;
	int arr[0];//��������
};

struct b
{
	int n;
	int*arr;//�ṹ���е�ָ��
};


//��������///////////////////////////////////////////////////////////////////
//int main()
//{
//
//	struct a c;
//	printf("%d ", sizeof(c));//�����������ṹ���С�ǲ���
//	struct a* cp = (struct a*)malloc(sizeof(c) + 10 * sizeof(int));
//	cp->n = 10;
//	int i = 0;
//	for (i = 0; i < 100; i++)//ʹ��
//	{
//		cp->arr[i] = i;
//	}
//
//	free(cp);//�ͷ�
//	cp = NULL;
//
//
//	return 0;
//}
int main()
{
	struct b d;
	struct b*ptr=(struct b*)malloc(sizeof(struct b));
	ptr->n = 10;
	ptr->arr = (struct b*)malloc(10 * sizeof(int));
	if (ptr->arr==NULL)
	{
		return 1;
	}
	int i = 0;
	for (i=0;i<10;i++)
	{
		ptr->arr[i] = i;
	} 
	free(ptr->arr);
	ptr->arr = NULL;
	
	free(ptr);
	ptr = NULL;
/*���������ڴ�ռ����Ҫ�ͷ����Ρ�
	������������Ա��������ͷţ�
	����������߿ռ������ʱ�������ڴ���Ƭ*/

	return 0;
}