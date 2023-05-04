#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact .h"
//////////////��̬�汾////////////////////
//void init_contact(contact*cp)//��ʼ������
//{
//	cp->sz = 0;
//	//contact con= {0};
//	memset(cp->data, 0, sizeof(cp->data));
//}
////////////////��̬�汾//////////////////
void init_contact(contact* cp)//��ʼ������
{
	cp->data = (peoinfo*)malloc(DEFAULT_SZ*sizeof(peoinfo));//��ʼ�����ݿ��ٿռ䷵����Ԫ�ص�ַ��data
	if (cp->data == NULL)
	{
		perror("init_contact");
		return;
	}
	cp->sz = 0;
	cp->capacity = DEFAULT_SZ;
}
void destorycontact(contact* pc)//����ͨѶ¼
{
	free(pc->data);
	pc->sz = 0;
	pc->capacity = 0;


}







/////////////��̬����//////////////
//void add_contact(contact* cp)//������ϵ��
//{
//	if (cp->sz == sizeof(cp->data))
//	{
//		printf("��ϵ������");
//		return;
//	}
//	printf("����������->");
//	scanf("%s",cp->data[cp->sz].name);
//	printf("����������->");
//	scanf("%d",&cp->data[cp->sz].age);
//	printf("�������Ա�->");
//	scanf("%s", cp->data[cp->sz].sex);
//	printf("������绰->");
//	scanf("%s", cp->data[cp->sz].tele);
//	printf("�������ַ->");
//	scanf("%s", cp->data[cp->sz].addr);
//	cp->sz++;
//	printf("��ӳɹ�\n");
//	
//}
///////��̬///////////////////////////
void add_contact(contact* cp)//������ϵ��
{
	//��������
	if (cp->sz == cp->capacity)
	{
		peoinfo*ptr=(peoinfo*)realloc(cp->data,(cp->capacity+INC_SZ)*sizeof(peoinfo));
		if (ptr != NULL)//�ж������Ƿ�ʧ��
		{
			cp->data = ptr;
			cp->capacity += INC_SZ;
			printf("���ݳɹ�");
		}
		else
		{
			perror("add_contact");
			printf("����ʧ��");
			return;
		}
	}
	printf("����������->");
	scanf("%s", cp->data[cp->sz].name);
	printf("����������->");
	scanf("%d", &cp->data[cp->sz].age);
	printf("�������Ա�->");
	scanf("%s", cp->data[cp->sz].sex);
	printf("������绰->");
	scanf("%s", cp->data[cp->sz].tele);
	printf("�������ַ->");
	scanf("%s", cp->data[cp->sz].addr);
	cp->sz++;
	printf("��ӳɹ�\n");

}
void contact_print(const contact* cp)//��ӡͨѶ¼
{
	printf("%-20s\t%-10s\t%-10s\t%-10s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
	int i = 0;
	for (i=0;i<cp->sz;i++)
	{
		printf("%-20s\t%-10d\t%-10s\t%-10s\t%-20s\n",cp->data[i].name,
			cp->data[i].age,
			cp->data[i].sex,
			cp->data[i].tele,
			cp->data[i].addr
		);
	}




}

int Find_by_name(contact* cp, char name[])//ͨ�������ҵ�
{
	int i = 0;
	for (i = 0; i < cp->sz; i++)
	{
		if (strcmp(cp->data[i].name, name)==0)//�ж��Ƿ����////////////////////
		{
			return i;
		}
	}
	return -1;
}






//ɾ����ϵ��
void del_contact(contact* cp)
{
	char name[MAX] = { 0 };
	if (cp->sz == 0)
	{
		printf("ͨѶ¼��");
		return;
	}
	
	printf("����������->");
	scanf("%s",name);
	int ret = Find_by_name(cp, name);
	if (ret == -1)
	{
		printf("û�д���ϵ��");
		return;
	}
	int i = 0;
	for (i = ret; i < cp->sz; i++)
	{
		cp->data[i] = cp->data[i + 1];
	}
	cp->sz--;
	printf("ɾ���ɹ�\n");
}

//����
void search_contact(contact* cp)
{
	char name[MAX] = { 0 };
	printf("����������->");
	scanf("%s", name);
	int i = Find_by_name(cp, name);
	if (i == -1)
	{
		printf("û�д���ϵ��");
		return;
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-10d\t%-10s\t%-10s\t%-20s\n", cp->data[i].name,
			cp->data[i].age,
			cp->data[i].sex,
			cp->data[i].tele,
			cp->data[i].addr);
	}

}

enum b
{
	a,
	NAME,
	SEX,
	AGE,
	TELE,
	ADDR
};


void modifymenu()
{
	printf("*************************\n");
	printf("*******  1.����   *******\n");
	printf("*******  2.�Ա�   *******\n");
	printf("*******  3.����   *******\n");
	printf("*******  4.�绰   *******\n");
	printf("*******  5.��ַ   *******\n");
	printf("*************************\n");
}
void modify_contact(contact* cp)//�޸�
{
	char name[MAX] = { 0 };
	printf("����������->");
	scanf("%s", name);
	int i = Find_by_name(cp, name);
	if (i == -1)
	{
		printf("û�д���ϵ��");
		return;
	}
	else
	{
		modifymenu();
		int input = 0;
		printf("��ѡ���޸ķ�ʽ��>");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			printf("����������->");
			scanf("%s", cp->data[i].name);
			break;
		case SEX:
			printf("�������Ա�->");
			scanf("%s", cp->data[i].sex);
			break;
		case AGE:
			printf("����������->");
			scanf("%d", &cp->data[i].age);
			break;
		case TELE:
			printf("������绰->");
			scanf("%s", cp->data[i].tele);
			break;
		case ADDR:
			printf("�������ַ->");
			scanf("%s", cp->data[i].addr);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
		printf("�޸ĳɹ�\n");
	}
}
int compare(const void* a, const void* b)
	{
		return (*(int*)a - *(int*)b);
	}
void sort_contact(contact* cp)//����
{
	if (cp->sz == 0)
	{
		printf("ͨѶ¼��û����ϵ��\n");
	}
	else
	{
		for (int i = 0; i < cp->sz - 1; i++)//ð������
		{
			for (int j = 0; j < cp->sz - 1 - i; j++)
			{
				if ((strcmp(cp->data[j].name, cp->data[j + 1].name)) > 0)//j>j+1
				{
					peoinfo temp = cp->data[j];
					cp->data[j] = cp->data[j + 1];
					cp->data[j + 1] = temp;
				}
				5
			}
		}
		printf("����ɹ���\n");
	}
	
	

}
