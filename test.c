#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include "contact.h"
//1.存放1000个好友的信息
// 名字  电话  性别   住址  年龄
// 2.增加好友信息
// 3.删除指定名字信息
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
	//创建通讯录
	struct Contact con;//con 就是通讯录   存放100个人的信息
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：>");
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
			printf("退出通讯录");
			break;
		default:
			printf("选择错误，请重新选择！！！");
			break;
		}
	} while (input);

	return 0;
}