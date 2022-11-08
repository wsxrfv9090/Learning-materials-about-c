#include <stdio.h>

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);Hexadecimal
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//Uni-array is stored in the Memory is successive
//The adress is moving higher as the subscripts increasing.
//The reason why its important is that if I can find the first address,
//I can find all the elements in the array

//ex:
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	//*p integer pointer
//	//arr is the address of the first element in the arr.
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}