//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
////Code a function that can determine if a number is a prime number
//
//
//int Prime(int x)
//{
//	int tmp = 0;
//	for (tmp = 2; tmp <= sqrt(x); tmp++)
//	{
//		if (x % tmp == 0)
//		{
//			return 0;
//		}
//		//else if (x% tmp != 0 && tmp == x - 1)
//		//{
//		//	return 1;
//		//	break;
//		//}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 101; i < 200; i += 2)
//	{
//		Prime(i);
//		if (Prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}