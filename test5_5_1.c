#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ļ�////////////////////////////////////////////////////////
int main()
{
	//���ļ�
	FILE*pf=fopen("test.dat","r");
	if (pf==NULL)
	{
		perror("fopen");
		return 1;
	}

	char arr[10] = { 0 };
	////���ļ�
	//int ret=fgetc(pf);
	//printf("%c\n", ret);
	//ret = fgetc(pf);
	//printf("%c\n", ret); 
	//ret = fgetc(pf);
	//printf("%c\n", ret);
	//fputs("abcdefg\n", pf);//д�ļ�
	//fputs("33333333\n", pf);
	fgets(arr,4,pf);
	printf("%s\n", arr);//ֻ�ܶ�������Ϊ�и�/0
	fgets(arr, 4, pf);
	printf("%s\n", arr);
	



	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}