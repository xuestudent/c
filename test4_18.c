#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>			//ģ��strstr����
#include <string.h>
#include<assert.h>
char * my_strstr(const char *str1,const char *str2)
{
	assert(str1 && str2);//���Ϊ��ָ��ͻ����
	const char* s1 = NULL;
	const char* s2 = NULL;
	char* cp = str1;
	if (*str2=='\0')
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1==*s2))//�����ý��жԱ�Ȼ����Ϊ\0
		{
			s1++;//�����ͬ
			s2++;

		}
		if (*s2=='\0')//�ַ�Ϊ��s2��s1�����ҵ�����cp��ַ�Ϳ��Կ�ʼ��ӡ
		{
			return cp;
		}
		cp++;//��������cp������һλ
	}

	return NULL;


}
int main()
{
	char arr[] = "abbbcdef";5
	char arr2[] = "bbc";
	char* ret=my_strstr(arr,arr2);
	if (ret==NULL)
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("%s",ret);
	}
	return 0;
}