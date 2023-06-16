#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

#define max 1000
#define max_name 20
#define max_tele 12
#define max_sex 5
#define max_addr 20

struct people
{
	char name[max_name];
	int age;
	char tele[max_tele];
	char sex[max_sex];
	char addr[max_addr];
};
struct contact
{
	struct people data[max];//1000元素
	int size;//元素个数
};
void Initcotact(struct contact* ps);
void addcontast(struct contact* ps);
void showcontast(const struct contact* ps);
void shancontast (struct contact* ps);
void chacontast(const struct contact* ps);
void gaicontast(struct contact* ps);


