//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////��ӡ1000�굽2000��֮�������
////�ҵĴ���
//int main()
//{
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d ", year);
//		year++;
//	}
//	return 0;
//}
//
////��ʦ�Ĵ���
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//				printf("%d ", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}