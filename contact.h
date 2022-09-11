
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include<stdio.h>
#include <string.h>
enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//ͨѶ¼������
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ���deԪ�ظ���
};
//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨ��¼
void AddContact(struct Contact* ps);
//��ʾͨ��¼����Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(const struct Contact* ps);
//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps);