//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
////编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序
//
//
//int main()
//{
//	printf("please unter your username: wsxrfv9090\n");
//	char password[] = {"Davy20020214hqz@."};
//	for(int i = 1; i < 4; i++)
//	{
//		printf("please enter your password: ");
//		char typedpassword[20] = { 0 };//这里char typedpassword要有一个大小限制，不然会报错：run-time check failure #2 - stack around the variable “typedpassword"was corrupted.
//		                               //暂时还不清楚为什么。
//		scanf("%s", typedpassword);
//		if (strcmp(typedpassword, password) == 0)//该比较函数需要引入头文件string.h，一位一位的比较asc码值，只要出现某一位大于某一位，则某字符串大于某字符串
//		{
//			printf("login in success!");
//			break;
//		}
//		else if (strcmp(typedpassword, password) == 1)
//		{
//			if (i <= 2)
//			{
//				int n = 3 - i;
//				printf("incorrect password, please try again, you have %d chance remaining\n", n);
//			}
//			else if (i == 3)
//			{
//				system("cls");
//				printf("you have entered you own password wrong for three times you dumb ass! fuck off! stop wasting my time!");
//				break;
//			}
//		}
//	}
//	return 0;
//}