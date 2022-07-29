//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////return part void means it doesn't need any return value
//           call by value
// 
// 
// 
// 
////void Swap(int x, int y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	printf("a = %d, b = %d", a, b);
////	Swap(a, b);
//      call a, b call by value
////	printf("a = %d, b = %d", a, b);
////	return 0;
////}
//
////The Codes have problems because a, band x, y are seperated variable;
////when they are in different functions, they have different space to store their content;
////Thu s we need address taking character &
//         
// 
// 
// 
// 
// 
// 
// 
// 
//          pa, pb are called formal parameters
//          and this call process is called call by address
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//	//*pa and *pb is actually a and b from main function
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d", a, b);
//       and this call process is called call by address
//       &a, &b are called actually parameters
//	Swap(&a, &b);
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
////unlike the ones above,the second one can didn't initiate a new space to store
////variables for Swap function; so through %a and *pa, they connect the two functions
