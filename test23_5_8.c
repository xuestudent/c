#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ַ����ʽ�������໥ת��////////////////////////////////////////////////////////////
//struct m
//{
//	int a;
//	char arr[10];
//	float b;
//};
//
//int main()
//{
//	struct m a = { 5,"abcde",5.5f };
//	struct m temp = { 0 };
//
//	char buff[100] = { 0 };
//	sprintf(buff,"%d %s %f",a.a,a.arr,a.b);
//	printf("%s\n",buff);
//
//	sscanf(buff, "%d %s %f",&(temp.a),temp.arr,&(temp.b));
//	printf("%d %s %f", temp.a,temp.arr,temp.b);
//	return 0;
//}
///fseek��������/////////////////////////////////////////////////////
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ret =fgetc(pf);
//	printf("%c", ret);
//	//����λ��
//	//fseek(pf,-1,SEEK_CUR);//���ϴο�ʼ��λ�ý����޸�
//	//fseek(pf, 2,SEEK_SET);//�ӿ�ʼ�����޸�
//	/*fseek(pf, 2, SEEK_END); */
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//
//}


///��test1.txtһ������text2.txt


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt","r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pf2 = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		fclose(pf);
//		pf == NULL;
//		perror("fopen");
//		return 1;
//	}
//	int ch = 0;
//	while ((ch=fgetc(pf))!=EOF)
//	{
//		fputc(ch,pf2);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	fclose(pf2);
//	pf2 = NULL;
//
//	return 0;
//}