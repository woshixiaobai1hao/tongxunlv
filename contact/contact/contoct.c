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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void showcontast(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-12s\t%-5s\t%-20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
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
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	int pos = chazhao(ps, name);
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
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
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos=chazhao(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�ҵ��˲�����");
	}
	else
	{
		printf("%-20s\t%-4s\t%-12s\t%-5s\t%-20s\n", "����", "����", "�绰", "�Ա�", "��ַ");
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
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = chazhao(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�����˲�����");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));
		printf("������绰��");
		scanf("%s", ps->data[pos].tele);
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("�������ַ��");
		scanf("%s", ps->data[pos].addr);
		printf("���ĳɹ�");
	}
}