#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include "contact.h"
//1.���1000�����ѵ���Ϣ
// ����  �绰  �Ա�   סַ  ����
// 2.���Ӻ�����Ϣ
// 3.ɾ��ָ��������Ϣ
// 4.
//


void menu()
{
	printf("**********************************\n");
	printf("****1.add     2.del    ***********\n");
	printf("****3.search  4.modify ***********\n");
	printf("****5.show    6.sort   ***********\n");
	printf("****0.exit             ***********\n");
	printf("**********************************\n");
	
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con ����ͨѶ¼   ���100���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼");
			break;
		default:
			printf("ѡ�����������ѡ�񣡣���");
			break;
		}
	} while (input);

	return 0;
}