#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h> 
/////////memmoveģ��ʵ��/////////////////////////////////
//void* my_memmove(void*str,const void*sru,size_t mun)
//{
//	void* ret = str;
//	assert(str && sru);
//	if (str<sru)
//	{
//		
//		//��ǰ���󿽱�
//		while (mun--)
//		{
//			*(char*)str = *(char*)sru;
//			str = (char*)str + 1;
//			sru = (char*)sru + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (mun--)
//		{
//			*((char*)str + mun) = *((char*)sru + mun);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//memmove(arr+2,arr,20);//memmove�⺯��
//	my_memmove(arr + 2, arr, 20);//ģ��memmove����
//
//	return 0;
//}


/// ///////memcmp����////////////////////////////////////////////

//int main()
//{
//	float arr[] = { 1.0,4.0,3.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr, arr2,8);//���浥λ���ֽ� ��ͬ����0�����ڷ��ش����������С�ڷ���С�������
//	printf("%d", ret);
//	return 0;
//}
/////////////memset����////////////////////////////////////////////

//int main()
//{
//	int arr[20] = { 0 };
//	memset(arr,1,20);//��λ��20�ֽڣ�ÿ���ֽڴ��ȥһ��1
//
//
//
//	return 0;
//}
//
