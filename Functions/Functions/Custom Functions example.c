//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//when Swap was called, the values of the actual para was transfered to formal para,
// so formal para is just a temp copy of actual para;
// so when you change formal para, it doesn't change the actual parameters.
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//the differences of ex1 and ex2 of not using &
//is that ex1 doesn't change what a and b actually is;
//it made a new variable just to figure out what who's bigger;
// therefore no need for inter connections between get_max and main;
//while ex2 changed a and b to swap them;
//so connections needed between Swap and main;
