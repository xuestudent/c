#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/// ////////�ṹ��������ṹ��/////////////////////////////////////////////
//struct book
//{
//	char name[10];
//	int price[10];
//	int ID[10];
//}b4,bk5,b6;//ȫ�ֱ���
//int main()
//{
//	//�ֲ�����
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//	return 0;
//}
//struct//�����ṹ��ֻ����һ��
//{
//	char name [10];
//	int price[10];
//	int ID[10];
//}s;
///////////////////�ṹ��������/////////////////////////////////
//�ṹ���Ա���ܺ������Լ�
//////////////////�ṹ��Ƕ��/////////////////////////////////////
struct k
{
	int a;
	char b;
}s;
struct B
{
	char b;
	struct k s;
	int a;
};
int main()
{

	struct B l = { 'p',{1,4},6};
	printf("%d %c  ", l.a,l.b);
	return 0;
}