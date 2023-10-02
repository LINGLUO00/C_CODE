#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 30

//动态版本定义的一些宏
#define DEFAULT_SZ 3
#define INC_SZ 2



typedef struct people
{
	char name[MAX_NAME];
	int age;
	char sex[5];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}people;
//静态版本
//typedef struct contact
//{
//	people data[MAX];
//	int sz;//记录有多少人信息
//}contact;


//动态版本
typedef struct contact
{
	people* data;//指向了存放数据的空间
	int sz;//记录有多少人信息
	int capacity;//通讯录当前的容量
}contact;

void initcontact(contact* pc);
void Addcontact(contact* pc);
void Showcontact(const contact* pc);
void Delcontact(contact* pc);
void Searchcontact(const contact* pc);
void Modifycontact(contact* pc);
void Sortcontact(contact* pc);
void Deleteontact(contact* pc);
void Savecontact(contact* pc);