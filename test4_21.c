#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<errno.h> 
#include <string.h>
//#include <ctype.h>
////���ļ�///////////////////////////////////////////////
//int main()
//{    //��ʧ�ܻ᷵�ؿ�ָ��
//	FILE* pf = fopen("test.txt", "r");//���ļ� ��r��ֻ������ʽ  fopen�᷵��FILE�͵�ָ��
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//��ȡָ�������Ϣ�ַ�����ָ��
//		perror("fopen");//��ӡ������Ϣ
//		return 1;
//	}
//
//	fclose(pf);//�ر�ָ��
//	pf = NULL;
//	return 0;
//}

///////////�ж��Ƿ��������ַ����ַ���Сд///////////////////////////////////
//int main()
//{
//	char ch = '*';
//	char ch2 = 'a';
//	int ret = isdigit(ch);
//	int ret2 = islower(ch2);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//
//
//	return 0;
//}

//////////��дתСд/////////////////////////////////////////////////////
//int main()
//{
//	char arr[20] = "0";
//	int i = 0;
//	scanf("%s",arr);
//	while (arr[i]!='\0')//�����������ѭ��
//	{
//		if (isupper(arr[i]))//�ж��Ǵ�д
//		{
//			arr[i] = tolower(arr[i]);//�Ǵ�д��ת����Сд
//		}
//		printf("%c ", arr[i]);//��ӡ
//		i++;//��Ȼ����ѭ��
//	}
//	return 0;
//}
//////////�ڴ��������ģ�⺯��///////////////////////////////////////////////////



//void my_memcpy(void*str,void*stu,size_t mun)
//{
//	while (mun--)
//	{
//		*(char*)str = *(char*)stu;
//		str = (char*)str + 1;
//		stu = (char*)stu + 1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//
//	//memcpy(arr2,arr,20);//�ڴ濽��
//	my_memcpy(arr2,arr,20);//ģ�⺯��
//
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}