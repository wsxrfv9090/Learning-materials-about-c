//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//
////编写代码，演示多个字符从两端移动，向中间汇聚
//
//int main()
//{
//	char arr1[] = "Davy is a fucking GOD";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;//部分编译器strlen需要引用头文件<string.h>
//	printf("%s\n", arr2);
//	Sleep(1000);
//	system("cls");
//	while (left-right<=1)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		if (left - right > 1)
//			continue;
//		Sleep(1000);//(Sleep函数以毫秒为单位，睡眠函数，1000就是等待一秒再继续执行，需要引入头文件<Windows.h>)
//		system("cls");//清理屏幕
//	}
//	return 0;
//}