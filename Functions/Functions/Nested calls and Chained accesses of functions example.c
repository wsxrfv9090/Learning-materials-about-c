#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
// 
//                                 Nested Calls of Functions
////you can nest the calls of function, but you can't nest the definition of functions
////meaning that you can't define a function within another function
//
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//                                     Chained Access
// 
//Definition:Take a return value of a function as a parameter of another function.

//#include <string.h>
//int main()
//{
//	printf("%d", strlen("abc"));
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	//The return value of printf is a integer number and it's the number of the printed character
//	printf("%d", printf("%d", printf("%d", 43));
//	return 0;
//}