#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////Outlines:
////1.What is function;
////2.Library Functions;
////3.Costom Functions;
////4.Parameters of Functions;
////5.Call statement of Functions;
////6.Call of nested Functions and Chained access of Functions;
////7.The statements and definitions of Functions;
////8.The recursion of Functions.
////
////What is a functions ?
////Subroutine; Function; procedure; routine; subprogram;
////is a series of codes in a massive program, is consist of one or multiple lines of codes
////and relatively independent;	
////with a parameterand a return value.
////
////devided in to two parts
////
////1.Library Functions;
////  Basically if something is used extremly often, out of indolence, people just made these
////  functions to make their life easier.
////
////	  a website for Library Functions:
////           www.cplusplus.com
////           www.en.cppreference.com
//// 
////    Library Functions' category:
////      1:IO functions(input,outptut)
////         ex:printf;scanf;getchar;putchar;
////      2:Character string operating functions:
////         ex:strcmp;strlen;
////      3:Character operating functions:
////         ex:toupper
////      4:Memory operating functions:
////         ex:memcpy;memcmp;memset;
////      5:Time/Date functions:
////         ex:time;
////      6:Mathematics functions:
////         ex:sqrt;pow;
////      7:Other library functions.
//// 
//
////ex:strcpy
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello Davy";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//ex:memset
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello Davy";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}

//Basic Custom Functions formation:

//ret_type fun_name(para1, *)
//{
//	statement;
//}
//ret_type means return type;
//fun_name means function's name;
//para1 means parameter;
