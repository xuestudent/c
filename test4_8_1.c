#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

////ð������
//void bobble_sort(int arr[], int size_t)
//{
//	int i = 0;
//	for (i = 0; i <size_t-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < size_t-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = 0;
//				temp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//print(int arr[],int se)
//{
//int n = 0;
//	for (n = 0; n <se; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int size = sizeof arr / sizeof arr[0];
//
//	print(arr, size);
//
//	bobble_sort(arr, size);
//
//	print(arr,size);
//
//	return 0;
//}



//����
print(int arr[], int se)
{
int n = 0;
	for (n = 0; n <se; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
}
int cmp_int(const void* e1, const void* e2)//void*������ָ��
{
	return*(int*)e1 - *(int*)e2;
}


struct stu
{
	char name[20];
	int age;
}

 test1()//��������
{
    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof arr / sizeof arr[0];
	qsort(arr,size, sizeof (arr[0]),cmp_int);
	print(arr, size);
}

sort_by_name(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->name - ((struct stu*)e2)->name;
}

sort_by_age(const void* e1, const void* e2)//�ṹ������
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;


}
test2()//�ṹ������
{
	struct stu s[] = { {"zhangsan",30}, {"lisi",32}, {"wangwu",20}};
	int sz = sizeof s / sizeof s[0];
	//����������
	qsort(s,sz,sizeof (s)/sizeof(s[0]),sort_by_age);
	//����������
	qsort(s, sz, sizeof(s) / sizeof(s[0]), sort_by_name);


}
int main()
{
	//test1();//��������
	test2();


	return 0;
}