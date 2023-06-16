#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
int chazhao(struct contact* ps,char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name));
		{
			return i;
		}
	}
	return -1;
}
void Initcotact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void addcontast(struct contact* ps)
{
	if (ps->size == max)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void showcontast(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-12s\t%-5s\t%-20s\n", "名字", "年龄", "电话", "性别", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-12s\t%-5s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].sex,
				ps->data[i].addr
				);
		}
	}
}
void shancontast(struct contact* ps)
{
	char name[max_name];
	printf("请输入要删除的名字：");
	scanf("%s", name);
	int pos = chazhao(ps, name);
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[pos] = ps->data[pos + 1];
		}
		ps->size--;
	}

}
void chacontast(const struct contact* ps)
{
	char name[max_name];
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	int pos=chazhao(ps, name);
	if (pos == -1)
	{
		printf("要找的人不存在");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-5s\t%-20s\n", "名字", "年龄", "电话", "性别", "地址");
		printf("%-20s\t%-4d\t%-12s\t%-5s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].tele,
			ps->data[pos].sex,
			ps->data[pos].addr);
	}
}
void gaicontast(struct contact* ps)
{
	char name[max_name];
	printf("请输入要更改人的名字：");
	scanf("%s", name);
	int pos = chazhao(ps, name);
	if (pos == -1)
	{
		printf("要更改人不存在");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
		printf("更改成功");
	}
}