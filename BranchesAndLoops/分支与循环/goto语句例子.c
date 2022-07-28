//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////可以乱跳
////int main()
////{
////flag:
////	printf("hehe\n");
////	printf("haha\n");
////
////	goto flag;
////	return 0;
////}
//
////关机程序
////只要运行起来，电脑就会在一分钟之内关机，如果输入我是猪，就取消关机
//
////关机在cmd里面的command是：shutdown -s -t 60
////                          -s表示设置关机，-t表示设置时间关机，60表示时间
////              取消关机是用shutdown -a，
////c语言提供了一个函数system，可以执行系统命令
////注意goto只能在该函数内跳转**
//
//
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意电脑将在1一分钟内关机，若不想关机，请输入：我是猪\n");
//	char tmp[20] = { 0 };
//	scanf("%s", tmp);
//	if (strcmp(tmp, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	} 
//	return 0;
//}