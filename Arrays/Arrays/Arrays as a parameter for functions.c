#include <stdio.h>

//bubble sort:
//Compare every two numbers, and swap
//9 8 7 6 5 4 3 2 1 0 for example
//swap
//8 9 7 6 5 4 3 2 1 0
//8 7 9 6 5 4 3 2 1 0
//8 7 6 5 4 3 2 1 0 9
//First part of bubble sort, at least one number will go to where it supposed to go
//will need at least 9 parts of it
//and if this array contains n elements, it will need at least n-1 parts of sorting
//

//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble sort:
//	bubble_sort(arr,sz);
//	return 0;
//}


//sizeof(arr)  culculates the size of the whole array
//
//&arr it represents the address of the whole array
//arr represents the address of the first element.

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	return 0;
//}