#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//д�ļ�/////////////////////////////////////
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s={"abcd",10,5.5f };
//	FILE* pf = fopen("test.dat","w");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf,"%s %d %f",s.arr,s.i,s.a);//(�ĸ��ļ���%d%c��дʲô����)
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ļ�
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pf, "%s %d %f",&s.arr,&(s.i),&(s.a));//(�ĸ��ļ���%d%c��дʲô����)
//
//	printf("%s %d %f",s.arr,s.i,s.a);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//������д�ļ�
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s = { "abcd",10,5.5f };//�ַ����Զ����ƺ����ı�����ʽд��ȥ��һ����
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����ƶ��ļ�
struct S
{
	char arr[10];
	int i;
	float a;

};
int main()
{
	struct S s = { 0 };//�ַ����Զ����ƺ����ı�����ʽд��ȥ��һ����
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f", s.arr, s.i, s.a);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}