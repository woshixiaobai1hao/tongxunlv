#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void maun()
{
	printf("*****************************\n");
	printf("******1.增       2.删   *****\n");
	printf("******3.查       4.改   *****\n");
	printf("******5.显示     6.打印 *****\n");
	printf("********** 0.退出 ***********\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	
	struct contact con;//创建通讯录，里面没有1000元素和size
	//存放1000人数据
	Initcotact(&con);//初始化通讯录
	do
	{
	   maun();//主菜单
	   printf("请输入:");
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
		   printf("退出通讯录\n");
		   break;
	   default:
		   printf("输入错误\n");
		   break;
	   }
	} while (input);
	return 0;
}