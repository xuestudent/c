#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/// ////////
//���������޸� �ṹ�崫��  λ��  ö�ٺ�define������
struct s1
{

	char c1;
	int i;
	char c2;

};
struct s3
{
	int arr[100000];


};


struct A
{
	int a : 3;
	int b : 4;
	int c : 5;
	int d : 4;
};

enum color
{
	red,//0
	blue,//1
	green//2
};
/////////�����޸�Ĭ�϶�����////////////////////////////////////////
#pragma pack(1)
struct s2
{

	char c1;
	int i;
	char c2;

};
#pragma pack()


void print1(struct s3* a)
{
	printf("%d\n",a->arr);
}
int main()
{
	
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	


	struct s3 a={0,1,2};
	print1(&a);//�����ýṹ��ָ�봫�ο��Խ�ʡ�ռ�


	printf("%d\n", red);
	struct A c = { 0 };
	c.a = 10;
	c.b = 12;
	c.c = 3;
	c.d = 4;
	return 0;
}