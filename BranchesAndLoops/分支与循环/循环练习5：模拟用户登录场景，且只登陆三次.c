//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
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
//		char typedpassword[] = { 0 };
//		scanf("%s", typedpassword);
//		if (strcmp(typedpassword, password) == 0)
//		{
//			printf("Login In Success!");
//			break;
//		}
//		else if (strcmp(typedpassword, password) == 1)
//		{
//			if (i <= 2)
//			{
//				int n = 3 - i;
//				printf("Incorrect Password, Please try again, you have %d chance remaining%d\n", n);
//			}
//			else if (i == 3)
//			{
//				printf("You have entered you own password wrong for three times you dumb ass! Fuck off! Stop wasting my time!");
//				break;
//			}
//		}
//	}
//	return 0;
//}