#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact .h"

enum b
{
	EXIT,
	add,
	del,
	search,
	modify,
	sort,
	print,
};
void menu()
{
	printf("********************************\n");
	printf("****1.add              2.del****\n");
	printf("****3.search        4.modify****\n");
	printf("****5.sort           6.print****\n");
	printf("************* 0.exit ***********\n");
	printf("********************************\n");
	printf("********************************\n");
	printf("********************************\n");
}

int main()
{
	int input = 0;
	contact con;
	init_contact(&con);//��ʼ��
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case EXIT:
			//����ͨѶ¼
			destorycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case add:
			add_contact(&con);
			break;
		case del:
			del_contact(&con);
			break;
		case search:
			search_contact(&con);
			break;
		case modify:
			modify_contact(&con);
			break;
		case sort:
			sort_contact(&con);
			break;
		case print:
			contact_print(&con);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}