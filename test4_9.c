#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��qsort����
swap(char*buf1,char*buf2,int width)//����
{
	int i = 0;
	for (i=0;i<width;i++)
	{
		char temp = *buf1;//���ĸ��ֽ����ν���
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;//Ȼ��ѵ�ַ�����λ
		buf2++;

	}
}
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void bobble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))//ģ��qsort����
{
	int i = 0;
	for (i=0;i<sz-1;i++)
	{
		int j = 0;
		for (j=0;j<sz-1-i;j++)
		{
			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) >0)//��charģ��������������
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void print(int arr[],int size)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
}
test()
{
	int arr[10] = { 8,9,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bobble_sort(arr,sz,4,cmp);
	print(arr,sz);
}
int main()
{
	test();
	return 0;
}