#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void maun()
{
	printf("*****************************\n");
	printf("******1.��       2.ɾ   *****\n");
	printf("******3.��       4.��   *****\n");
	printf("******5.��ʾ     6.��ӡ *****\n");
	printf("********** 0.�˳� ***********\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	
	struct contact con;//����ͨѶ¼������û��1000Ԫ�غ�size
	//���1000������
	Initcotact(&con);//��ʼ��ͨѶ¼
	do
	{
	   maun();//���˵�
	   printf("������:");
	   scanf("%d", &input);
	   switch (input)
	   {
	   case 1:
		   addcontast(&con);
		   break;
	   case 2:
		   shancontast(&con);
		   break;
	   case 3:
		   chacontast(&con);
		   break;
	   case 4:
		   gaicontast(&con);
		   break;
	   case 5:
		   showcontast(&con);
		   break;
	   case 6:
		   break;
	   case 0:
		   printf("�˳�ͨѶ¼\n");
		   break;
	   default:
		   printf("�������\n");
		   break;
	   }
	} while (input);
	return 0;
}