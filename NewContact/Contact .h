#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




#define MAX_NAME 1000
#define MAX_SEX 200

#define MAX_TELE 11
#define MAX_ADDR 200


#define MAX 200



#define DEFAULT_SZ 3//��ʼ��
#define INC_SZ 2//���ӵ���



typedef struct peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}peoinfo;
//////��̬////////////////
//typedef struct contact
//{
//	peoinfo data[MAX];
//	int sz;
//}contact;
////////��̬////////////////
typedef struct contact
{
	peoinfo *data;//ָ��̬����Ŀռ����������Ϣ
	int sz;
	int capacity;//��ǰͨѶ¼���������
}contact;



//��ʼ��ͨѶ¼
void init_contact(contact* cp);

//�����ϵ��
void add_contact(contact* cp);
//��ӡ
void contact_print(const contact* cp);
//ɾ����ϵ��
void del_contact(contact* cp);

int Find_by_name(contact* cp, char name);//ͨ�������ҵ�

void destorycontact(contact*cp);//����ͨѶ¼

void search_contact(contact* cp);//����

void modify_contact(contact* cp);//�޸�

void sort_contact(contact* cp);//����


void save_contact(contact* cp);//����ͨѶ¼

void load_contact(contact* cp);//����ͨѶ¼


void checkcapacity(contact* cp);//��������